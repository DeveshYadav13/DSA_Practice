class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int res = -1;
        for(int i = 0; i<min(s1.size(),min(s2.size(),s2.size())); i++){
            if(s1[i]==s2[i] && s1[i]==s3[i]){res = i;}
            else{break;}
        }
        if(res == -1){return res;}
        int op = 0;
        op+=s1.size()-(res+1);
        op+=s2.size()-(res+1);
        op+=s3.size()-(res+1);
        return op;
    }
};