class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        int ans = 0;
        for(char c = 'a'; c<='z'; c++){
            int mx1 = 0, mx2 = 0, mx3 = 0;
            for(int i = 0; i<n; i++){
                if(s[i]!=c){continue;}
                
                int j = i;
                int cnt = 0;
                while(j<n && s[j]==s[i]){
                    cnt++;
                    if(cnt>mx3){
                        mx1 = mx2;
                        mx2 = mx3;
                        mx3 = cnt;
                    }
                    else if(cnt>mx2){
                        mx1 = mx2;
                        mx2 = cnt;
                    }
                    else if(cnt>mx1){
                        mx1 = cnt;
                    }
                    j++;
                }
                i = j;
            }
            ans = max(ans,mx1);
        }
        
        return ans==0 ? -1 : ans;
    }
};