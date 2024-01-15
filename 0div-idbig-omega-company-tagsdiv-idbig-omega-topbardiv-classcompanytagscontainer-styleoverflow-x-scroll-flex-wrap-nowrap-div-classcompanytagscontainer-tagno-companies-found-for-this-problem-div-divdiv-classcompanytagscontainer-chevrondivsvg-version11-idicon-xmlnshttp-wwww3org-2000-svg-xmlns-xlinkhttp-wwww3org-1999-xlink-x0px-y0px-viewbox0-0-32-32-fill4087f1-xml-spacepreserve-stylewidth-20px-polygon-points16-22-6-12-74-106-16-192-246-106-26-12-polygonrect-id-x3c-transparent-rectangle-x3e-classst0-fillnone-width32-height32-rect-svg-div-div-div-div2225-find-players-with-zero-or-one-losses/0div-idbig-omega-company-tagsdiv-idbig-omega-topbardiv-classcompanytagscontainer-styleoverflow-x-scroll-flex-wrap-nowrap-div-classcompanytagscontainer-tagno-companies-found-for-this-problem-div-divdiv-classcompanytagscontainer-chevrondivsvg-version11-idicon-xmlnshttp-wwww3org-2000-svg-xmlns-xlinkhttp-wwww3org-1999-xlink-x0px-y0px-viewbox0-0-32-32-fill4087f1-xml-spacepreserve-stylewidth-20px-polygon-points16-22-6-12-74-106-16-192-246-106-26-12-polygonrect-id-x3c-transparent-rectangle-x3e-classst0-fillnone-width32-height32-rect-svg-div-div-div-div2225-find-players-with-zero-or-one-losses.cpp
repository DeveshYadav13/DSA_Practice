class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        for(auto i : matches){
            mp[i[0]]+=0;  // just to consider them in map
            mp[i[1]]++;
        }
        
        vector<int>f;
        vector<int>s;
        for(auto i : mp){
            if(i.second==0){f.push_back(i.first);}
            if(i.second==1){s.push_back(i.first);}
        }
        
        vector<vector<int>>ans;
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }
};