class Solution {
public:
    string largestOddNumber(string num) {
        int idx = -1;
        for(int i = num.length()-1; i>=0; i--){
            if(((int)num[i]-48)%2!=0){
                idx = i;
                break;
            }
        }
        
        if(idx==-1)return "";
        num.erase(idx+1);
        return num;
    }
};