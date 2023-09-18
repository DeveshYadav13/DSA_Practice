class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        
        while(l<=r){
            int m = l + (r-l)/2;
            
            if(nums[m]==target){
                return m;
            }
            
            // is right part sorted
            else if(nums[m]<=nums[r]){   
                
                // check target for right part
                if(nums[m]<target && target<=nums[r]){
                    l = m+1;
                }
                
                else{
                    r = m-1;
                }
            }
            
            // is left part sorted
            else if(nums[m]>=nums[l]){
                
                // check target for left part
                if(nums[l]<=target && target<nums[m]){
                    r = m-1;
                }
                
                else{
                    l = m+1;
                }
            }
        }
        
        return -1;
    }
};