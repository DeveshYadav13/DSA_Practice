class Solution {
public:
    bool isFascinating(int n) {
        string s = "";
        s+=to_string(n);
        s+=to_string(2*n);
        s+=to_string(3*n);
        unordered_map<char,int>mp;
        
        if(s.length()!=9){return false;}
        
        for(auto i : s){
            if(i=='0'){return false;}
            mp[i]++;
        }
        
        for(char i = '1'; i<='9' ;i++){
            if(mp[i]!=1)return false;
        }
        
        return true;
    }
};