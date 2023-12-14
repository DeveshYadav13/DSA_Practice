class Solution {
public:
    const int mod = 1e9+7;
    
    int numSub(string s) {
        // find consecutive 1's i.e. cnt
        // if cnt == 1 -> 1 substr
        // if cnt == 2 -> 3 substr
        // if cnt == 3 -> 6 substr
        // if cnt == 4 -> 10 substr
        // if cnt == n -> (n*(n+1))/2 substr
        
        long long substr = 0;
        int n = s.size();
        for(int i = 0; i<n;){
            if(s[i]=='1'){
                long long cnt = 0;
                while(i<n && s[i]=='1'){
                    i++;
                    cnt++;
                }
                substr+=((cnt*(cnt+1))/2)%mod;
            }
            else{
                i++;
            }
        }
        
        return (int)substr%mod;
    }
};