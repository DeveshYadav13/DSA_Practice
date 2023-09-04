class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        int l = maxi+k-1;
        
        int ans = (k*(l+maxi))/2;
        return ans;
    }
};