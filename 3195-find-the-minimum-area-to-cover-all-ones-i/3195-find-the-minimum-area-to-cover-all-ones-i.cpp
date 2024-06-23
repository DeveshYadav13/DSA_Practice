class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l = INT_MAX, r = INT_MIN, u = INT_MAX, d = INT_MIN;
        int n = grid.size(), m = grid[0].size();
        
        for(int i = 0 ; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(grid[i][j]==1){
                    l = min(l,i);
                    r = max(r,i);
                    u = min(u,j);
                    d = max(d,j);
                }
            }
        }
        
        int reqarea = (r-l+1)*(d-u+1);
        return reqarea;
    }
};