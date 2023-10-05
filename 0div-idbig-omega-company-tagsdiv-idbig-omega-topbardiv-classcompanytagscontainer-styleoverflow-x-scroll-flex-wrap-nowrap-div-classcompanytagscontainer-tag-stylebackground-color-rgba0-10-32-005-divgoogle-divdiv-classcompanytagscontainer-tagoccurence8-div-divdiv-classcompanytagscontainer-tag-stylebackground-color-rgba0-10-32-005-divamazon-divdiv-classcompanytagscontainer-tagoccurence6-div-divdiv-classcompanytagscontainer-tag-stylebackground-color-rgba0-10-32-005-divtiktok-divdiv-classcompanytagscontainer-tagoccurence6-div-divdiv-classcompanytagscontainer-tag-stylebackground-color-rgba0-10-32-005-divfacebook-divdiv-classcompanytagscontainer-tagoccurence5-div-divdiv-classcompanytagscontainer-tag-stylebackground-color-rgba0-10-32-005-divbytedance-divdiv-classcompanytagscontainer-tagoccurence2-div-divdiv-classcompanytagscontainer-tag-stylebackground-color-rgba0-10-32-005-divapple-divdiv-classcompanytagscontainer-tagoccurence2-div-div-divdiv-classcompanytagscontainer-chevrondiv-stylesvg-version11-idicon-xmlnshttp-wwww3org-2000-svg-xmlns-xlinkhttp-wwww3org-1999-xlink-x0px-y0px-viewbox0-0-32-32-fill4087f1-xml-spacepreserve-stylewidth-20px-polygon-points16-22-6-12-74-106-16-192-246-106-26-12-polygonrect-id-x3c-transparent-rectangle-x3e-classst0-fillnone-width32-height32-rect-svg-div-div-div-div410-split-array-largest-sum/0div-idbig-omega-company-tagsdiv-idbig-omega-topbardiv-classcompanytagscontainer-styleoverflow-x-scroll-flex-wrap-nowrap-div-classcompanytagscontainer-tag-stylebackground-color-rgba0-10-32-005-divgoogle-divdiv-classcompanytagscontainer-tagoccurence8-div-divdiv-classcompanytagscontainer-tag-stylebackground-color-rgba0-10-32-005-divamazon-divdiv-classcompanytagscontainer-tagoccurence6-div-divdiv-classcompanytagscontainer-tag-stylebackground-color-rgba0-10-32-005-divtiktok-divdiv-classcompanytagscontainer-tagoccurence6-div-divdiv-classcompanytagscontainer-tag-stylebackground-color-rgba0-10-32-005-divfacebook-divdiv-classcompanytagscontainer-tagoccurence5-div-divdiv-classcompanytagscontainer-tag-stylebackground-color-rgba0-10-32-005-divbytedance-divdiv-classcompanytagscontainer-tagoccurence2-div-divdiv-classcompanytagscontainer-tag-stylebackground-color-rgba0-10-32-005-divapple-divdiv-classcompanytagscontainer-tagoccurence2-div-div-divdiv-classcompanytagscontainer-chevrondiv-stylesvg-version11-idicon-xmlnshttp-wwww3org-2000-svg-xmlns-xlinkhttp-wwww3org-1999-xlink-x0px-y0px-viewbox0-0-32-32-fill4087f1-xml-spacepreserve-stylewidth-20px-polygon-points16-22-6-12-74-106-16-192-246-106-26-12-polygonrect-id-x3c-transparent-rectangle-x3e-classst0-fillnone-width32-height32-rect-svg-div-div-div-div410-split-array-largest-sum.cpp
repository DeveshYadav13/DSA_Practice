class Solution {
public:
    // check if exactly k parts can be done while largest sum of split == sum
    bool solve(int sum, int k, vector<int>&nums){
        int parts = 1;
        int curr = 0;
        for(auto i : nums){
            curr+=i;
            if(curr>sum){
                parts++;
                curr = i;
            }
            if(parts>k){return false;}
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){return -1;}
        
        int l = *max_element(nums.begin(),nums.end()); // minimum possible largest sum if k==n
        int r = 0;
        for(auto i : nums){
            r+=i;               // max possible largest sum if k==1
        }
        
        int ans = 0;
        while(l<=r){
            int m = l+(r-l)/2;
        
            // check if it is possible to split array into exactly 'k' parts with max sum of each part <= m
            if(solve(m,k,nums)){
                ans = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        return ans;
    }
};