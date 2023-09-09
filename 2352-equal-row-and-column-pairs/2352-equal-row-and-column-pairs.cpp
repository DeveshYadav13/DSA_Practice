class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int n = grid.size();
        
        vector<int>vc;
        for(auto i : grid){
            vc.clear();
            for(auto j : i){
                vc.push_back(j);
            }
            mp[vc]++;
        }
        
        int ans = 0;
        for(int i = 0; i<n; i++){
            vc.clear();
            for(int j = 0; j<n; j++){
                vc.push_back(grid[j][i]);
            }
            ans+=mp[vc];
        }
        
        return ans;
    }
};