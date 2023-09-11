class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>>vc(n+1);
        
        for(int i = 0; i<n; i++){
            vc[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>>ans;
        
        for(int i = 1; i<=n; i++){
            int x = vc[i].size()-1;
            while(x>=0){
                vector<int>temp;
                int sz = i;
                while(sz--){
                    if(x<0){break;}
                    temp.push_back(vc[i][x]);
                    x--;
                }
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};