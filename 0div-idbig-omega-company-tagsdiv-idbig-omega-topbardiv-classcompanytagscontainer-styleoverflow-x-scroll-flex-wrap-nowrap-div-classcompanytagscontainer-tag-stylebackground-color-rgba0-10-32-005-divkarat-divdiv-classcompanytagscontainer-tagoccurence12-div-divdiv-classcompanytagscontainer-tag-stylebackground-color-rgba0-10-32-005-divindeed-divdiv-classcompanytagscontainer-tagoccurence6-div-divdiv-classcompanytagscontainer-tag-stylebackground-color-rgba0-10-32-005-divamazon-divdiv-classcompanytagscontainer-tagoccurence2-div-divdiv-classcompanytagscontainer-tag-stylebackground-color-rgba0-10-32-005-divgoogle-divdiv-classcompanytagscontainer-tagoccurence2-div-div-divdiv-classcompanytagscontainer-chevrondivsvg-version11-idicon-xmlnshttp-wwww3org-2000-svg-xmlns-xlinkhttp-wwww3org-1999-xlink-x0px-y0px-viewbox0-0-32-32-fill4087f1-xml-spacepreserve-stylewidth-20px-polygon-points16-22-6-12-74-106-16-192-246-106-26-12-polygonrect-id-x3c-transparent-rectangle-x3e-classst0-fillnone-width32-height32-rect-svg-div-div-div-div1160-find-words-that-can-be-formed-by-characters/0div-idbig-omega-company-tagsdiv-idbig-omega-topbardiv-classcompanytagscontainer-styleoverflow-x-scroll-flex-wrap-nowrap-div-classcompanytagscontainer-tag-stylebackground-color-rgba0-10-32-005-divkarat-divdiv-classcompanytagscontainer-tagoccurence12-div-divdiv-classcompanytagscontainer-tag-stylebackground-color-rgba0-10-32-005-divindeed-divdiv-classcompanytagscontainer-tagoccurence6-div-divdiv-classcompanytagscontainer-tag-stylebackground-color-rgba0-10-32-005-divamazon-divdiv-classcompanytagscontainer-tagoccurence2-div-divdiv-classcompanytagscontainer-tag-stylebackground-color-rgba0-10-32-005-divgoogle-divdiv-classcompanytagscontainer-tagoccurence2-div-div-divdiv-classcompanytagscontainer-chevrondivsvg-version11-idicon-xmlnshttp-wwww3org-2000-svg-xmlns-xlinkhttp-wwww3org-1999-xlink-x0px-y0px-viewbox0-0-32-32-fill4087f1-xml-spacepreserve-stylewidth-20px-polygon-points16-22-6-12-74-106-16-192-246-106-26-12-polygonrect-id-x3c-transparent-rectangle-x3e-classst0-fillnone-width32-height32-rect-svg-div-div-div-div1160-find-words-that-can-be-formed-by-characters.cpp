class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto i : chars){
            mp[i]++;
        }
        
        int res = 0;
        unordered_map<char,int>copy;
        copy = mp;
        for(auto word : words){
            bool check = true;
            for(auto c : word){
                if(copy[c]<=0){check=false; break;}
                copy[c]--;
            }
            if(check){res+=word.length();}
            copy = mp;
        }
        
        return res;
    }
};