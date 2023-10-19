class Solution {
public:
    string create(string s){
        string temp;
        for(auto i : s){
            if(i=='#'){
                if(temp.size()>0){
                    temp.pop_back();
                }
            }
            else{
                temp.push_back(i);
            }
        }
        
        return temp;
    }
    
    bool backspaceCompare(string s, string t) {
        return create(s)==create(t);
    }
};