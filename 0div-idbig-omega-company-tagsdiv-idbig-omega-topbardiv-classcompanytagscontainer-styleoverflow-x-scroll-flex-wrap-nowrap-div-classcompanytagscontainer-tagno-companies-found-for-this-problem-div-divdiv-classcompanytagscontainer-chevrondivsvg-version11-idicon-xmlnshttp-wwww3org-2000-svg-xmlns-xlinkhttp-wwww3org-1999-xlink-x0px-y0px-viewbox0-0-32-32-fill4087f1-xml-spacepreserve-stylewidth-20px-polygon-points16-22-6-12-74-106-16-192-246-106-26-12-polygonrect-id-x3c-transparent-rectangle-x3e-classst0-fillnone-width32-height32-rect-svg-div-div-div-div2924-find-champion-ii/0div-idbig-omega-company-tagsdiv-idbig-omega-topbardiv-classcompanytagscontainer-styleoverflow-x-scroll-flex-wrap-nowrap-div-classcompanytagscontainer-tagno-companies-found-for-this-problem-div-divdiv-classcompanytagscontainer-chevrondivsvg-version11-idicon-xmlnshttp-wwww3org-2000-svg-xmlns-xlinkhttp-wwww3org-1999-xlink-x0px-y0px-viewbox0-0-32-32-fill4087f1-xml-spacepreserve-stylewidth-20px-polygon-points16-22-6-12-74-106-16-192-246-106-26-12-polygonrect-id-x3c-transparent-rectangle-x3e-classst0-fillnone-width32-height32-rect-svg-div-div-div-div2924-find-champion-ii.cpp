class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<bool>vc(n,false);
        
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            vc[v] = true;
        }
        
        int winner = -1;
        for(int i = 0; i<n; i++){
            if(!vc[i]){
                if(winner!=-1){
                    return -1;
                }
                winner = i;
            }
        }
        
        return winner;
    }
};