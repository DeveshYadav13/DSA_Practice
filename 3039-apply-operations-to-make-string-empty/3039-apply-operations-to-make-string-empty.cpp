class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp;
        int mx = INT_MIN;
        for(auto i : s){
            mp[i]++;
            mx = max(mx,mp[i]);
        }

        for(auto i : mp){
            int cur = i.second;
            int allowed = 0;
            if(cur==mx){
                allowed = 1;
            }
            mp[i.first] = allowed;
        }
        
        string res;
        for(int i = s.length()-1; i>=0; i--){
            if(mp[s[i]]==1){
                res.push_back(s[i]);
                mp[s[i]]=0;
            }
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};