class Solution {
public:
    bool check(int x, int y){
        return ((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0));
    }
    
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>pref(nums.size(),0);
        for(int i = 0; i<nums.size()-1; i++){
            if(check(nums[i],nums[i+1])==false){
                pref[i+1] = pref[i] + 1;
            }
            else{
                pref[i+1] = pref[i];
            }
        }
        
        vector<bool>ans;
        for(auto it : queries){
            int i = it[0];
            int j = it[1];
            if(pref[j] == pref[i]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};