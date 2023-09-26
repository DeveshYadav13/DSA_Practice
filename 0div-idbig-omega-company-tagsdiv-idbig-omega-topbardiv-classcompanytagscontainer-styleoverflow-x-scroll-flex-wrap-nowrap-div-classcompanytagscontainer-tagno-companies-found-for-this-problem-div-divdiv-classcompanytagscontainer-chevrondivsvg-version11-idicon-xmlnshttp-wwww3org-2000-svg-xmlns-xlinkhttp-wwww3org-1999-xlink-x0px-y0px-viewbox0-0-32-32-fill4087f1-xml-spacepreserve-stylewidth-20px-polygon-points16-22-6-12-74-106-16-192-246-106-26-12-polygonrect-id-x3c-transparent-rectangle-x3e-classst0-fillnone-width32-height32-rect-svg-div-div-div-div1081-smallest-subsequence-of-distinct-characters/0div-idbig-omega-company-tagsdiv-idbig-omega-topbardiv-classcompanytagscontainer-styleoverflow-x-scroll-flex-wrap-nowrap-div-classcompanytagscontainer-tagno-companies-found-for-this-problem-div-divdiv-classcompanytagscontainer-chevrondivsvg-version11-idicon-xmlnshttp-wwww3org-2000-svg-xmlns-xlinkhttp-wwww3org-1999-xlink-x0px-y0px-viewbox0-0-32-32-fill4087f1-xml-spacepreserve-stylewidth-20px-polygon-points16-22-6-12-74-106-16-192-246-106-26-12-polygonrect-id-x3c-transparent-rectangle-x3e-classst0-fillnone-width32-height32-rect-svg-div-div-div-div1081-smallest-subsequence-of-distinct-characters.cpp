class Solution {
public:
    string smallestSubsequence(string s) {
        // vector<int>unique;
        // unordered_map<int,int>mp;
        // for(auto i : s){
        //     mp[i]++;
        // }        
        // for(int i = 0; i<s.length(); i++){
        //     if(mp[s[i]]==1){
        //         unique.push_back(i);
        //     }
        // }
        // int idx = 0;
        // vector<bool>eras(s.length(),false);
        // for(int i = 0; i<s.length(); ++i){
        //     if(mp[s[i]]==-1){
        //         eras[i] = 1;
        //         continue;
        //     }
        //     if(idx >= unique.size()){
        //         if(mp[s[i]]>1){
        //             if(s[i]>'a'){
        //                 eras[i] = 1;
        //                 mp[s[i]]--;
        //             }
        //             else{
        //                 mp[s[i]] = -1;
        //             }
        //         }
        //         continue;
        //     }
        //     if(i<unique[idx]){
        //         if(mp[s[i]]>1){
        //             if(s[unique[idx]]<s[i]){
        //                 mp[s[i]]--;
        //                 eras[i] = 1;                        
        //             }
        //             else{
        //                 mp[s[i]] = -1;   // remove all future occurences of this
        //             }
        //         }
        //     }
        //     else{
        //         idx++;
        //     }
        // }
        // string ans;
        // for(int i = 0; i<eras.size();++i){
        //     if(!eras[i])ans.push_back(s[i]);
        // }
        // return ans;
          string res;
          int cnt[26] = {}, used[26] = {};
          for (auto ch : s) ++cnt[ch - 'a'];
          for (auto ch : s) {
            --cnt[ch - 'a'];
            if (used[ch - 'a']++ > 0) continue;
            while (!res.empty() && res.back() > ch && cnt[res.back() - 'a'] > 0) {
              used[res.back() - 'a'] = 0;
              res.pop_back();
            }
            res.push_back(ch);
          }
          return res;
    }
};