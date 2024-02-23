class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>>adj[n];
        for(auto i  : flights){
            adj[i[0]].push_back({i[1],i[2]});
        }
        
        //pair<int,pair<int,int>>
        //{dist,{node,stops}}
        queue<pair<int,pair<int,int>>>pq;
        //priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        vector<int>dist(n,1e9);
        dist[src] = 0;
        pq.push({0,{src,0}});
        
        while(!pq.empty()){
            int node = pq.front().second.first;
            int dis = pq.front().second.second;
            int stops = pq.front().first;
            pq.pop();
            
            if(stops>k){
                continue;
            }
            
            for(auto i : adj[node]){
                int next = i.first;
                int edgW = i.second;
                if(dis+edgW < dist[next]){
                    dist[next] = dis + edgW;
                    pq.push({stops+1,{next,dis+edgW}}); 
                }  
             
            }
        }
        
        return dist[dst]!=1e9 ? dist[dst] : -1;

    }
};