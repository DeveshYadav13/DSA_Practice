class Solution {
public:
    int enc(int n){
        int mx = n%10;
        int temp = n/10;
        while(temp>0){
            mx = max(mx,temp%10);
            temp = temp/10;
        }
        
        int newnum = mx;
        n = n/10;
        while(n>0){
            newnum = newnum*10+mx;
            n=n/10;
        }
        return newnum;
    }
    
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums){
            sum+=enc(i);
        }
        return sum;
    }
};