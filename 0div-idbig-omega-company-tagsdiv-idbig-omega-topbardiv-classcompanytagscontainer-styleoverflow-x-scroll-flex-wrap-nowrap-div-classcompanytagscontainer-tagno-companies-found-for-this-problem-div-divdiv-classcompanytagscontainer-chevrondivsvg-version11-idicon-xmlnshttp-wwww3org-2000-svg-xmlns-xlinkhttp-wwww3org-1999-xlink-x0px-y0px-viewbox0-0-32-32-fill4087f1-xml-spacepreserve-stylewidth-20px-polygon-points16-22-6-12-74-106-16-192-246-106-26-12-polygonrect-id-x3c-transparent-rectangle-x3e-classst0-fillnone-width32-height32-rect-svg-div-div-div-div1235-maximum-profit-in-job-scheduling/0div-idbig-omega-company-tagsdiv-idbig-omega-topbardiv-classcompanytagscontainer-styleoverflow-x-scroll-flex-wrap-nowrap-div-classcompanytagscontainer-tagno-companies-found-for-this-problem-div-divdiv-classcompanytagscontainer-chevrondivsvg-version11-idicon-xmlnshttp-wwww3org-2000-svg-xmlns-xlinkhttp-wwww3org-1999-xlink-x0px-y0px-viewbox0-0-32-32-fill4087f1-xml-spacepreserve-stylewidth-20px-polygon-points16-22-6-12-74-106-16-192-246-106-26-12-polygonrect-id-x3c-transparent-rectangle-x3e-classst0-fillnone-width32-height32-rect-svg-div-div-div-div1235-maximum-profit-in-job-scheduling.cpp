class Solution {
public:
    int solve(int i, vector<vector<int>>&job, vector<int>&startTime, vector<int>&dp, int n){
        if(i>=n){return 0;}
        if(dp[i]!=-1){return dp[i];}
        int index = lower_bound(startTime.begin(),startTime.end(),job[i][1])-startTime.begin();
        int pick = job[i][2] + solve(index,job,startTime,dp,n);
        int notpick = solve(i+1,job,startTime,dp,n);
        return dp[i] = max(pick,notpick);
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>>vc;
        vector<int>dp(n,-1);
        
        for(int i = 0; i<n; i++){
            vc.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(vc.begin(),vc.end());
        sort(startTime.begin(),startTime.end());
        return solve(0,vc,startTime,dp,n);
    }
};