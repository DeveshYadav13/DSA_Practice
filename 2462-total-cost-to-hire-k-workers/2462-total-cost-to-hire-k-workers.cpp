class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int> >lpq;
        priority_queue<int, vector<int>, greater<int> >rpq;
        int l,r;
        
        // take all in one go
        if(2*candidates>=costs.size()){
            for(auto i : costs){
                lpq.push(i);
            }
            l = 1;
            r = 0;
        }
        
        else{
            for(int i = 0; i<candidates; i++){
                lpq.push(costs[i]);
            }
            for(int i = costs.size()-1; i>=costs.size()-candidates; i--){
                rpq.push(costs[i]);
            }
            
            l = candidates;
            r = costs.size()-candidates-1;
        }
        
        // cout<<"lpq\n";
        // while(!rpq.empty()){
        //     cout<<rpq.top()<<"\n";
        //     rpq.pop();
        // }
        
        long long ans = 0;
        while(k--){
            if(!rpq.empty() && !lpq.empty()){
                if(lpq.top()<=rpq.top()){
                    ans+=lpq.top();
                    lpq.pop();
                    
                    if(l<=r){
                        lpq.push(costs[l++]);
                    }
                }
                
                else{
                    ans+=rpq.top();
                    rpq.pop();
                    
                    if(l<=r){
                        rpq.push(costs[r--]);
                    }
                }
                continue;
            }
            if(lpq.empty()){
                ans+=rpq.top();
                rpq.pop();
                if(l<=r){
                    rpq.push(costs[r--]);
                }
                continue;
            }
            
            if(rpq.empty()){
                ans+=lpq.top();
                lpq.pop();
                    
                if(l<=r){
                    lpq.push(costs[l++]);
                }
            } 
        }
        
        return ans;
        
    }
};