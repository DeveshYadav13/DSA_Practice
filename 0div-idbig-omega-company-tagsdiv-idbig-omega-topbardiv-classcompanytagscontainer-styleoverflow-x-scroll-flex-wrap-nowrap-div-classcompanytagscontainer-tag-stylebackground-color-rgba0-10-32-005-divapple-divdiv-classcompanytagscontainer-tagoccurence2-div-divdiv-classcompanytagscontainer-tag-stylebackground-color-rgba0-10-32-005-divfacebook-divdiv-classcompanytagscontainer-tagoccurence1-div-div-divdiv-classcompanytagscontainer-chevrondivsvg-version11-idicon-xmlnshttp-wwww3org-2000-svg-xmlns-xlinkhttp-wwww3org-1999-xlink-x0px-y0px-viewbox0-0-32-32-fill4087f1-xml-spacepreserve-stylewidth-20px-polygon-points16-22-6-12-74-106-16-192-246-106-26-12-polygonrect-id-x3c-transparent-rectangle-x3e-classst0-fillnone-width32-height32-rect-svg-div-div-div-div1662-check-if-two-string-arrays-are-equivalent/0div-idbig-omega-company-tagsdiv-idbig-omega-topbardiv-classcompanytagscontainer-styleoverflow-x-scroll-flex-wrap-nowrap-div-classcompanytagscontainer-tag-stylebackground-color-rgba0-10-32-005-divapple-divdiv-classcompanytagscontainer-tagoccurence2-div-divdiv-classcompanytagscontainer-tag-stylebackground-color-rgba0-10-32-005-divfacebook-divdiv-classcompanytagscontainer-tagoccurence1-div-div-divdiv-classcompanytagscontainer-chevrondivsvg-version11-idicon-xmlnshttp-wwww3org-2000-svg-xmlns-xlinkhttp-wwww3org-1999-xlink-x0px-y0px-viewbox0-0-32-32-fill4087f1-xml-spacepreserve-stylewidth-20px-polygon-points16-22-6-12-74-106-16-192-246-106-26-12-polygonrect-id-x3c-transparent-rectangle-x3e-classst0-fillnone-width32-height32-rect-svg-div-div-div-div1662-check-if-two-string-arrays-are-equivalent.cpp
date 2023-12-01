class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //O(N) space
        
        // string a="",b="";
        // for(auto i : word1){
        //     a=a+i;
        // }
        // for(auto j : word2){
        //     b=b+j;
        // }
        // if(a==b){
        //     return true;
        // }
        // return false;
        
        
        //O(1) space
        
        int i = 0, j = 0; // word pointers
        int m = 0, n = 0; // char pointers
        
        while (i < word1.size() and j < word2.size()) {            
            if (word1[i][m++] != word2[j][n++])
                return false;
            
            if (m >= word1[i].size())
                i++, m = 0;
            
            if (n >= word2[j].size())
                j++, n = 0;
        }
        
        return i == word1.size() and j == word2.size();
        
        
    }
};