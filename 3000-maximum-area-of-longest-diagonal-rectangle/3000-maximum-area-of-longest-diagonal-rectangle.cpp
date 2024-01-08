class Solution {
public:
    int diasq(int l , int b){
        int val = (l*l+b*b);
        return val;
    }
    
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int res = 0;
        int mxdia = 0;
        for(auto i : dimensions){
            int val = diasq(i[0],i[1]);
            int l = i[0];
            int b = i[1];
            if(mxdia<val){
                mxdia = val;
                res = l*b;
            }
            else if(mxdia==val){
                res = max(res,l*b);
            }
        }
        
        return res;
    }
};