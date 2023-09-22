class Solution {
public:
    bool isSubsequence(string s, string t) {
      
        int i,j;
        for(i = 0,j=0; i<s.length(), j<t.length() ; j++){
            if(t[j]==s[i]){
                i++;
            }
        }
        if(i<s.length()){
            return false;
        }
        return true;
    }
};