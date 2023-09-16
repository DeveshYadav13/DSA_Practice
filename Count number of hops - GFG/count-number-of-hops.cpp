//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
const int mod = 1e9+7;

class Solution
{
    public:
    
    long long solve(int i, int n,vector<long long>&dp){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        long long ways = (solve(i+1,n,dp) + solve(i+2,n,dp) + solve(i+3,n,dp))%mod;
        return dp[i] = ways;
    }
    
    long long countWays(int n)
    {
        vector<long long>dp(n+1,-1);
        return solve(0,n,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends