class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int val1 = edges[0][0];
        int val2 = edges[0][1];
        if(edges[1][0]==val1 || edges[1][1]==val1){
            return val1;
        }
        return val2;
    }
};