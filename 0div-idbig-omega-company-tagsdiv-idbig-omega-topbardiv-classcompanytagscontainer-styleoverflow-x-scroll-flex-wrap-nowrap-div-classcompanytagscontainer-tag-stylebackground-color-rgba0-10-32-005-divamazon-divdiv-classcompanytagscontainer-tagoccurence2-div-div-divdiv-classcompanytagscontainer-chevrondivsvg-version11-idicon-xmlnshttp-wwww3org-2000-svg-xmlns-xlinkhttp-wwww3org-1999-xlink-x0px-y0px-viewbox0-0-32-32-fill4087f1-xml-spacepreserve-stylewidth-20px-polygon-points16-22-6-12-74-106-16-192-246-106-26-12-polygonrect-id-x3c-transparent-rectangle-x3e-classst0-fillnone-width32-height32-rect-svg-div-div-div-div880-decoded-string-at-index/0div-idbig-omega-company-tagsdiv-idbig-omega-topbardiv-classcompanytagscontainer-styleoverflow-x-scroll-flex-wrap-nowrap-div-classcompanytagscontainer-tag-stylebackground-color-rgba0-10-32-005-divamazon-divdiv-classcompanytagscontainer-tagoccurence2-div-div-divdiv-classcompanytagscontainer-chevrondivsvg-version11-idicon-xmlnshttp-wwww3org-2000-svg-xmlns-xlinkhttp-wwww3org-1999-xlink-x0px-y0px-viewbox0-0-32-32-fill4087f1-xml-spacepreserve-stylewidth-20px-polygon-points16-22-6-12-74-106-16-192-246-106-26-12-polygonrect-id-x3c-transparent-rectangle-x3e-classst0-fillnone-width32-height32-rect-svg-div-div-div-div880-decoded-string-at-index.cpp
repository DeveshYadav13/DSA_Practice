class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long int len = 0;
        
        int i;
        for(i = 0; i<s.length(); i++){
            if(len>=k){break;}
            
            if(s[i]>='1' && s[i]<='9'){
                len = len*((int)s[i]-48);
            }
            else{
                len++;
            }
        }
        
        for(int j = i-1; j>=0; --j){
            if(s[j]>='1' && s[j]<='9'){
                len/=((int)s[j]-48);
                k = k%len;
            }
            else{
                if(k==0 || k==len){
                    string res;
                    res.push_back(s[j]);
                    return res;
                }
                len--;
            }
        }
        return "";
    }
};