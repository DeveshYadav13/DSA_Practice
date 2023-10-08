class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = INT_MAX;
        if(strs.size()==1){return strs[0];}
        for(int i = 0; i<strs.size()-1; i++){
            string f = strs[i];
            string s = strs[i+1];
            int j = 0;
            while(j<f.size() && j<s.size() && s[j]==f[j]){
                j++;
            }
            mini = min(mini,j-1);
        }
        
        if(mini==INT_MAX){return "";}
        string res = strs[0];
        res.erase(mini+1);
        return res;
    }
};