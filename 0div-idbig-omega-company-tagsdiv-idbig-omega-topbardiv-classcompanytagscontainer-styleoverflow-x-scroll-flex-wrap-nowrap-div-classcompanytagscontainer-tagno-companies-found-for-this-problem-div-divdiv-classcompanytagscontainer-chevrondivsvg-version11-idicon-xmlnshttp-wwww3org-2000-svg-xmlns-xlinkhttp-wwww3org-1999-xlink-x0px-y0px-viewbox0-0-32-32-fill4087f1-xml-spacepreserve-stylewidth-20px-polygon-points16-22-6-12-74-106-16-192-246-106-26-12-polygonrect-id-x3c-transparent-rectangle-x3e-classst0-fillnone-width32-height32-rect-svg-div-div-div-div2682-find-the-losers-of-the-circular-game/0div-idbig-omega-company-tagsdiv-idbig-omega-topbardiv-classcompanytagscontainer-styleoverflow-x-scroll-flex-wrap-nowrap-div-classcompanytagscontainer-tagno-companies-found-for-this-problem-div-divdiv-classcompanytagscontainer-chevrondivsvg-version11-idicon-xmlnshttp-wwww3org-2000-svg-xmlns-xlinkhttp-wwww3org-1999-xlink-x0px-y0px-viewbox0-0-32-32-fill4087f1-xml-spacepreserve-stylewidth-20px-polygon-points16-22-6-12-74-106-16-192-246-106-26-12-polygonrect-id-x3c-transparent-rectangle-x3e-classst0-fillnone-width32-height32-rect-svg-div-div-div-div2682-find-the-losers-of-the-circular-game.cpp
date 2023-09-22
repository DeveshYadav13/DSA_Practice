class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool>H(n+1,false);
        int prev = 1;
        H[1] = 1;
        int cnt = 1;
        int jump = cnt*k;
        while(1){
            prev = (prev+jump)%(n+1)+(prev+jump>n);
            cnt++;
            //cout<<prev<<'\n';
            jump = cnt*k;
            jump = jump%n;

            if(H[prev]){
                break;
            }
            H[prev] = 1;
        }
        
        vector<int>ans;
        for(int i = 1; i<=n; i++){
            if(!H[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};