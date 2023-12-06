class Solution {
public:
    int totalMoney(int n) {
        int st = 1;
        int ans = 0;
        
        while(n>=7){
            ans+=(7*(st+3));
            st++;
            n-=7;
        }
        
        for(int i = st; i<st+n; i++){
            ans+=i;
        }
        
        return ans;
    }
};