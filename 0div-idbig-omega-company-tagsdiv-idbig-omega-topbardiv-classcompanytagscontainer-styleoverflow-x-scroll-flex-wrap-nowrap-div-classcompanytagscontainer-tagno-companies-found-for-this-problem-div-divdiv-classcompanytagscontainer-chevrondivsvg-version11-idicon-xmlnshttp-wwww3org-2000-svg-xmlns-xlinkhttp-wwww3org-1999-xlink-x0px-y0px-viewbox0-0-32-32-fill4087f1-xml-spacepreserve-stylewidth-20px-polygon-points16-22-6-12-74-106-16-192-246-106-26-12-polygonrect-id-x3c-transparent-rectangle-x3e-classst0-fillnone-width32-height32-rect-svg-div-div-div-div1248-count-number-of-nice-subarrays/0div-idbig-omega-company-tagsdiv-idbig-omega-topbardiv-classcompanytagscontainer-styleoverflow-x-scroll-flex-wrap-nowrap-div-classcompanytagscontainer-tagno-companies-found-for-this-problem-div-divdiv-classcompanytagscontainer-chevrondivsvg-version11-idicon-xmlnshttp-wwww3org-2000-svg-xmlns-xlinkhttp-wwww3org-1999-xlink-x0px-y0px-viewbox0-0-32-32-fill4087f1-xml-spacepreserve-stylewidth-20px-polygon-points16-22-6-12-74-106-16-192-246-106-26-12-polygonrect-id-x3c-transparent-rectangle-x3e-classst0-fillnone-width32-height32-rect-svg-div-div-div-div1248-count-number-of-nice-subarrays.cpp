class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int n = nums.size();
        int ocnt = 0;
        int cnt = 0;
        int ans = 0;
        
        while(r<n){
           if(nums[r]&1){
               ocnt++;
               cnt = 0;
           }
           while(ocnt==k){
               cnt++;
               ocnt-=nums[l]&1;
               l++;
           }
            
           ans+=cnt;
           r++;
        }
        
        return ans;
    }
};