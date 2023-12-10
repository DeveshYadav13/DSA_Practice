class Solution {
public:
    bool issubsequence(string& s1, string& s2)
    {
        int n = s1.length(), m = s2.length();
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (s1[i] == s2[j])
                i++;
            j++;
        }
        return i == n;
    }
    
    string findLongestWord(string s, vector<string>& dictionary) {
        int maxlen = 0;
        string res = "";
        for(auto i : dictionary){
            if(issubsequence(i,s)){
                int curr = i.size();
                if(curr>maxlen){
                    maxlen = curr;
                    res = i;
                }
                else if(curr==maxlen){
                    res = min(res,i);
                }
            }
        }
        
        return res;
    }
};