class Solution {
public:
    int issubsequence(string s1, string s2)
    {
        int n = s1.length(), m = s2.length();
        int i = n-1, j = m-1;
        while (i>=0 && j>=0) {
            if (s1[i] == s2[j]){
                i--;
                if(i<0){break;}
            }
            j--;
        }

        if(i>=0){return -1;}
        return j;
    }
    
    int minimumOperations(string num) {
        int ans = INT_MAX;
        int p1 = issubsequence("25",num);
        if(p1!=-1){
            ans = min(ans,(int)(num.length()-p1-2));
        }
        
        int p2 = issubsequence("50",num);
        if(p2!=-1){
             ans = min(ans,(int)(num.length()-p2-2));
        }
        
        int p3 = issubsequence("75",num);
        if(p3!=-1){
             ans = min(ans,(int)(num.length()-p3-2));
        }
        
        int p4 = issubsequence("00",num);
        if(p4!=-1){
             ans = min(ans,(int)(num.length()-p4-2));
        }
        
        if(p1!=-1 || p2!=-1 || p3!=-1 || p4!=-1){
            return ans;
        }
        
        int p5 = issubsequence("0",num);
        if(p5!=-1){
            return num.length()-1;
        }
        
        return num.length();
    }
};