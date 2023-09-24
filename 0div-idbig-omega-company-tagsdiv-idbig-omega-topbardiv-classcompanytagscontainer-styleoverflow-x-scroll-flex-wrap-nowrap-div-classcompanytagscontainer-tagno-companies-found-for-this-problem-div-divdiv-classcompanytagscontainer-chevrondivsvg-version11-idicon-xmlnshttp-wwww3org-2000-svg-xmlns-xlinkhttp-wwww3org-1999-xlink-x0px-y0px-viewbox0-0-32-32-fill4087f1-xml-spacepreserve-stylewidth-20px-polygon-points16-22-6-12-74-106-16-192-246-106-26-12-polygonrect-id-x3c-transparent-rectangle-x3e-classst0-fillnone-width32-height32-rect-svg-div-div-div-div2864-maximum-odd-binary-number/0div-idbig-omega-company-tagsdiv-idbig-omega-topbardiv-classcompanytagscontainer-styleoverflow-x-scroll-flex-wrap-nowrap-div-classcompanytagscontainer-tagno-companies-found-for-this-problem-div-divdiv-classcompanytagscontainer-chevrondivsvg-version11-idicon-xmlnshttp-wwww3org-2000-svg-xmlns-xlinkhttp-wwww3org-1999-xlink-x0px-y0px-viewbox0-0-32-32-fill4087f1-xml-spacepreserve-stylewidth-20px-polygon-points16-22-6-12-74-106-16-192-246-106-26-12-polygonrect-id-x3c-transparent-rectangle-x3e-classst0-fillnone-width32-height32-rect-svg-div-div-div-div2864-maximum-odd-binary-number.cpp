class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        bool isOdd = false;
        int n = s.length();
        if(s[n-1]=='1'){isOdd = true;}
        
        int front = 0;
        int back = 0;
        
        while(back<n-1){
            if(s[back]=='1'){
                if(!isOdd){
                    swap(s[back],s[n-1]);
                    isOdd = true;
                }
                else{
                    swap(s[back],s[front]);
                    front++;
                }
            }
            back++;
        }
        
        return s;
    }
};