class Solution {
public:
    int binarySearch(int l, int r, vector<int>&nums,int target){
        if(l>r){return -1;}
        
        int m = l + (r-l)/2;
        if(nums[m]==target){return m;}
        else if(nums[m]>target){return binarySearch(l,m-1,nums,target);}
        return binarySearch(m+1,r,nums,target);
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(0,nums.size()-1,nums,target);
    }
};
