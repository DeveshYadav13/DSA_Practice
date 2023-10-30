class Solution {
public:
    int solve(int i, vector<int>& nums, int target, vector<vector<int>>&dp)     {
        if(target==0){return 0;}
        if(i>=nums.size()){return -10000;}
        
        if(dp[i][target]!=-1){return dp[i][target];}
        
        int take = -10000;
        if(target>=nums[i]){
            take = 1 + solve(i+1,nums,target-nums[i],dp);
        }
        
        int nottake = solve(i+1,nums,target,dp);
        return dp[i][target] = max(take,nottake);
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));   
        int ans = solve(0,nums,target, dp);
        return ans>0 ? ans : -1;
    }
};