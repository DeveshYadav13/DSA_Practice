class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        
        priority_queue<pair<int,char>>pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        
        string res;
        while(!pq.empty()){
            int cnt = pq.top().first;
            char c = pq.top().second;
            while(cnt--){
                res.push_back(c);
            }
            pq.pop();
        }
        return res;
    }
};