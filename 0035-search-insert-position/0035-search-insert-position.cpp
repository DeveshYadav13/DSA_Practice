class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // in short we need to find smallest index st arr[i]>=target : lower bound
        return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    }
};