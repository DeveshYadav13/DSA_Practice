class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.length();
        if(n<=2){return false;}
        
        int acnt = 0, bcnt = 0;
        for(int i = 1; i<n-1; ++i){
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A'){
                int cnt = 0;
                while(i<n-1 && colors[i+1]=='A'){
                    cnt++;
                    i++;
                }
                acnt+=cnt;
            }
            if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B'){
                int cnt = 0;
                while(i<n-1 && colors[i+1]=='B'){
                    cnt++;
                    i++;
                }
                bcnt+=cnt;
            }
        }
        
        return acnt>bcnt ? true : false;
    }
};