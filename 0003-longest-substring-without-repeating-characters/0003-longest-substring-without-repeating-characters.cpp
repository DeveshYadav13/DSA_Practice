class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l = 0, r = 0;
        mp[s[l]]++;
        int n = s.length();
        if(n==0){return 0;}
        int maxlen = 1;
        
        while(r<n-1){
            if(mp[s[r+1]]>=1){
                while(l<r && mp[s[r+1]]>=1){
                    mp[s[l]]--;
                    l++;
                }
                if(l!=r){
                    r++;
                    mp[s[r]]++;
                }
                else{
                    mp.clear();
                    mp[s[l]]++;
                    if(mp[s[r+1]]>=1){mp[s[l]]--; l++;} 
                    r++;
                    mp[s[r]]++;
                }
            }
            else{
                r++;
                mp[s[r]]++;
                //cout<<l<<" "<<r<<"\n";
                maxlen = max(maxlen,r-l+1);
            }
        }
        
        return maxlen;
    }
};