class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(auto i : s){
            mp1[i]++;
        }
        for(auto i : t){
            mp2[i]++;
        }
        
        for(auto i : mp1){
            //cout<<i.first<<" "<<i.second<<"\n";
            if(i.second!=mp2[i.first]){
                return i.first;
            }
        }
        for(auto i : mp2){
            if(i.second!=mp1[i.first]){
                return i.first;
            }
        }
        
        return ' ';
    }
};