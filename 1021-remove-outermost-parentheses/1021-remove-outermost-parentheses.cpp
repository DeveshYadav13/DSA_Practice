class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string tmp;
        string ans="";
        for(auto i : s){
            if(i=='('){cnt++;}
            else{cnt--;}
            
            if(cnt==0){
                tmp.erase(0,1);
                ans+=tmp;
                tmp.clear();
                continue;
            }
            else{
                tmp.push_back(i);
            }
        }
        ans+=tmp;
        return ans;
    }
};