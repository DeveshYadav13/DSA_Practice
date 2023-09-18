class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // First occ : smallest index with arr[ind]==target
        // Last occ  : largest index with arr[ind]==target
        int n =nums.size();
        
        int firstocc = n;
        int l = 0, r = n-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m]<target){
                l = m+1;
            }
            else if(nums[m]==target){
                firstocc = min(firstocc,m);
                r = m-1;
            }
            else{
                r = m-1;
            }
        }
        
        int lastocc = -1;
        l = 0, r = n-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m]>target){
                r = m-1;
            }
            else if(nums[m]==target){
                lastocc = max(lastocc,m);
                l = m+1;
            }
            else{
                l = m+1;
            }
        }
        
        if(firstocc==n){return {-1,-1};}
        return {firstocc,lastocc};
    }
};