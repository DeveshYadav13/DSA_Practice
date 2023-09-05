class Solution {
public:
    int calcScore(vector<int>&score){
        int s = 0;
        int allHit = 0;
        
        for(auto i : score){
            if(allHit>0){
                s+=2*i;
                allHit--;
            }
            else{
                s+=i;
            }
            
            if(i==10){allHit = 2;}
        }
        
        return s;
    }
    
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int s1 = calcScore(player1);
        int s2 = calcScore(player2);
        
        if(s1>s2){return 1;}
        if(s2>s1){return 2;}
        return 0;
    }
};