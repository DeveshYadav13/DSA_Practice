class Solution {
public:
    int solve(vector<vector<int>>& matrix, int i , int j, vector<vector<int>>&dp){
        int n = matrix.size();
        if(i<0 || j<0 || i>=n || j>=n){
            return 1e9;
        }
        if(i==n-1){
            return matrix[i][j];
        }
        if(dp[i][j]!=1e9){
            return dp[i][j];
        }
        int d = matrix[i][j] + solve(matrix,i+1,j,dp);
        int dl = matrix[i][j] + solve(matrix,i+1,j-1,dp);
        int dr = matrix[i][j] + solve(matrix,i+1,j+1,dp);

        return dp[i][j] = min(d,min(dl,dr));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // vector<vector<int>>dp(n,vector<int>(n,1e9));
        vector<int>prev(n);
        vector<int>curr(n);
        
        for(int j = 0;j<n;j++){
            prev[j] = matrix[0][j];
        }

        for(int i=1; i<n;i++){
            for(int j =0;j<n;j++){
                int d = matrix[i][j] + prev[j];
                int dl = INT_MAX, dr = INT_MAX;
                if(j+1<n)dl = matrix[i][j] + prev[j+1];
                if(j-1>=0)dr = matrix[i][j] + prev[j-1];
                curr[j] = min(d,min(dl,dr));
            } 
            prev = curr;
        }
        
        int mini = INT_MAX;
        for(int j = 0; j<n;j++){
            mini = min(mini,prev[j]);
        }
        return mini;
    }
};