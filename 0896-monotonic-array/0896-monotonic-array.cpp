class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return true;}
        
        int i = 0;
        int inc = -1;
        while(i<n-1){
            while(nums[i]==nums[i+1]){
                i++;
                if(i==n-1){return true;}
            }
            if(inc==-1){
                if(nums[i]>nums[i+1]){inc = 0;}
                else{inc = 1;}
            }
            else if(inc == 0){
                if(nums[i]<nums[i+1]){return false;}
            }
            else{
                if(nums[i]>nums[i+1]){return false;}
            }
            i++;
        }
        
        return true;
    }
};