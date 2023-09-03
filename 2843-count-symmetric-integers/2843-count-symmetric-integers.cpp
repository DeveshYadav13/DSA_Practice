class Solution {
public:
    
    bool solve(int n, int dig){
        int s1 = 0, s2 = 0;
        while(dig--){
            s1+=n%10;
            n=n/10;
        }
        while(n>0){
            s2+=n%10;
            n=n/10;
        }
        return s1==s2;
    }
    
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        int cntDig;
        
        for(int i = low; i<=high ;i++){
            if((i>=0 && i<=9) || (i>=100 && i<=999) || i==10000){continue;}
            
            if(i>=10 && i<=99) { cntDig = 2; }
            if(i>=1000 && i<=9999) { cntDig = 4; }
            
            if(solve(i,cntDig/2)){
                ans++;
            }
        }
        
        return ans;
    }
};