class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int total = 0;
        
        while(mainTank>4){
            mainTank-=5;
            total+=5;
            if(additionalTank>0){
                additionalTank--;
                mainTank++;
            }
        }
        
        total+=mainTank;
        return 10*total;
    }
};


