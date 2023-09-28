class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = nums.size()-1;
        
        while(l<r){
            while(l<r && nums[l]%2==0){l++;}
            while(l<r && nums[r]%2!=0){r--;}
            if(l>=r){break;}
            
            swap(nums[l],nums[r]);
        }
        
        return nums;
    }
};