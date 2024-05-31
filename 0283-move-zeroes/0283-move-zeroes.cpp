class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerocnt = 0;
        int prev = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                zerocnt++;
            }
            else{
                nums[prev] = nums[i];
                prev++;
            }
        }
        
        int idx = nums.size()-1;
        while(zerocnt--){
            nums[idx] = 0;
            idx--;
        }
        
    }
};