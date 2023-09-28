//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int row, int col, vector<vector<bool>>&visited, vector<vector<int>>& grid, int delta[]){
        visited[row][col] = true;
        for(int i = 0;i<4;i++) {
            int nrow = row + delta[i]; 
            int ncol = col + delta[4-i-1]; 
                
            if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol < grid[0].size() && 
            grid[nrow][ncol] == 1 && !visited[nrow][ncol]) {
                visited[nrow][col] = true;
                dfs(nrow,ncol,visited,grid,delta);
            }
        }     
    }
  
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int r = grid.size(), c = grid[0].size();
        vector<vector<bool>>visited(r,vector<bool>(c,false));
        int delta[] = {-1,0,1,0};
        
        for(int i = 0; i<r; i++){
            if(!visited[i][0] && grid[i][0]==1){
                dfs(i,0,visited,grid,delta);
            }
            if(!visited[i][c-1] && grid[i][c-1]==1){
                dfs(i,c-1,visited,grid,delta);
            }
        }
        for(int j = 0; j<c; j++){
            if(!visited[0][j] && grid[0][j]==1){
                dfs(0,j,visited,grid,delta);
            }
            if(!visited[r-1][j] && grid[r-1][j]==1){
                dfs(r-1,j,visited,grid,delta);
            }
        }
        
        int ans = 0;
        for(int i = 0; i<r; i++){
            for(int j = 0 ; j<c; j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends