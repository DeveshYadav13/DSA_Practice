class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int rmin[n];
        rmin[n-1] = -1;
        int mn = nums[n-1];
        
        for(int i = n-2; i>=0; i--){
            rmin[i] = mn;
            mn = min(mn,nums[i]);
        }
        
        int lmax = -1;
        for(int i = 0; i<=n-2; i++){
            lmax = max(lmax,nums[i]);
            if(lmax<=rmin[i]){
                return i+1;
            }
        }
        return n;
    }
};