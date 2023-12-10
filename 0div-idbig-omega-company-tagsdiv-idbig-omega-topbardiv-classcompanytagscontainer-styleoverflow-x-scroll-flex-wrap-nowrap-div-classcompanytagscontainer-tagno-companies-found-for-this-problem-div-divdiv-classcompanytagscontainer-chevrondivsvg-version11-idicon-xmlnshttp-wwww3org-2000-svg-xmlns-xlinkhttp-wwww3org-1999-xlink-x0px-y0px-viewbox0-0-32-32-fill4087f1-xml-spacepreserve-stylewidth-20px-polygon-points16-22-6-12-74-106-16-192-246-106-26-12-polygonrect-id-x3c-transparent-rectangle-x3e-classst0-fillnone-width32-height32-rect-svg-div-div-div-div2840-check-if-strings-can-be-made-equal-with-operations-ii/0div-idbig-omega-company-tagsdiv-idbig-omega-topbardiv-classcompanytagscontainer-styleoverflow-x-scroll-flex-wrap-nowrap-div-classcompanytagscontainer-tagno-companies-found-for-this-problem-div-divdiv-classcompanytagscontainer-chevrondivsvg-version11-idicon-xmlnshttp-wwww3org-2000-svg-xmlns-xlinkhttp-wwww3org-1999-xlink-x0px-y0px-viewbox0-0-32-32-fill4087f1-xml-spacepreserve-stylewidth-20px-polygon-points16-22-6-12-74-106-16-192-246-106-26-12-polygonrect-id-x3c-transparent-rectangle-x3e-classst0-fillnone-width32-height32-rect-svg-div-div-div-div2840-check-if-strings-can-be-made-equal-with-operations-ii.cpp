class Solution {
public:
    bool checkStrings(string s1, string s2) {
        // checking even indices
        map<char,int>mp1;
        for(int i = 0; i<s1.size(); i+=2){
            mp1[s1[i]]++;
        }
        map<char,int>mp2;
        for(int i = 0; i<s1.size(); i+=2){
            mp2[s2[i]]++;
        }
        
        if(mp1!=mp2){
            return false;
        }
        
        mp1.clear();
        mp2.clear();
        
        // checking odd indices
        for(int i = 1; i<s1.size(); i+=2){
            mp1[s1[i]]++;
        }

        for(int i = 1; i<s2.size(); i+=2){
            mp2[s2[i]]++;
        }
        
        if(mp1!=mp2){
            return false;
        }
        
        return true;
    }
};