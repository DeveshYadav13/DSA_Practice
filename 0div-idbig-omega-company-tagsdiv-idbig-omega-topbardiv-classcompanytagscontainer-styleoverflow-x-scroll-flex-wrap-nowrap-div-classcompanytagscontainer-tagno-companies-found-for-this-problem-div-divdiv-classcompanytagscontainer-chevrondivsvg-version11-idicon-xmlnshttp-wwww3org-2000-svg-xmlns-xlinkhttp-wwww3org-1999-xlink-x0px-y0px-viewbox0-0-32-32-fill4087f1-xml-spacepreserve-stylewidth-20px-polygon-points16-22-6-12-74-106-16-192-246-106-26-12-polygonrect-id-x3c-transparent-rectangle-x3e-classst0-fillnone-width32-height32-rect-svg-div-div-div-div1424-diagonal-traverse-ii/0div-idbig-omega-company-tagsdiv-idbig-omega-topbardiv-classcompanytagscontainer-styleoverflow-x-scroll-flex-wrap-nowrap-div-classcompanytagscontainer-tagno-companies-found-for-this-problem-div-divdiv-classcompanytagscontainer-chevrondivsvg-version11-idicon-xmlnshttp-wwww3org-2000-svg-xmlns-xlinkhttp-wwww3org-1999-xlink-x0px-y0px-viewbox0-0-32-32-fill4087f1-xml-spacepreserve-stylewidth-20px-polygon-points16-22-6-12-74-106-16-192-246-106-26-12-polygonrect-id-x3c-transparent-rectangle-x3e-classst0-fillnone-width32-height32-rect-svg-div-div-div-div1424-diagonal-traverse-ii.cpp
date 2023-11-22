class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        map<int,vector<int>>mp;
        
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums[i].size(); j++){
                int s = i + j;
                mp[s].push_back(nums[i][j]);
            }
        }
        
        for(auto i : mp){
            vector<int> v = i.second;
            for(int j = v.size()-1; j>=0; j--){
                ans.push_back(v[j]);
            }
        }
        
        return ans;
    }
};