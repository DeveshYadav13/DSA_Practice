class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i] = -1;
        }
        for(int i = 0; i<moveFrom.size(); ++i){
            mp[moveFrom[i]] = 0;
            mp[moveTo[i]] = -1;
        }
        
        vector<int>ans;
        for(auto it : mp){
            if(it.second==-1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};