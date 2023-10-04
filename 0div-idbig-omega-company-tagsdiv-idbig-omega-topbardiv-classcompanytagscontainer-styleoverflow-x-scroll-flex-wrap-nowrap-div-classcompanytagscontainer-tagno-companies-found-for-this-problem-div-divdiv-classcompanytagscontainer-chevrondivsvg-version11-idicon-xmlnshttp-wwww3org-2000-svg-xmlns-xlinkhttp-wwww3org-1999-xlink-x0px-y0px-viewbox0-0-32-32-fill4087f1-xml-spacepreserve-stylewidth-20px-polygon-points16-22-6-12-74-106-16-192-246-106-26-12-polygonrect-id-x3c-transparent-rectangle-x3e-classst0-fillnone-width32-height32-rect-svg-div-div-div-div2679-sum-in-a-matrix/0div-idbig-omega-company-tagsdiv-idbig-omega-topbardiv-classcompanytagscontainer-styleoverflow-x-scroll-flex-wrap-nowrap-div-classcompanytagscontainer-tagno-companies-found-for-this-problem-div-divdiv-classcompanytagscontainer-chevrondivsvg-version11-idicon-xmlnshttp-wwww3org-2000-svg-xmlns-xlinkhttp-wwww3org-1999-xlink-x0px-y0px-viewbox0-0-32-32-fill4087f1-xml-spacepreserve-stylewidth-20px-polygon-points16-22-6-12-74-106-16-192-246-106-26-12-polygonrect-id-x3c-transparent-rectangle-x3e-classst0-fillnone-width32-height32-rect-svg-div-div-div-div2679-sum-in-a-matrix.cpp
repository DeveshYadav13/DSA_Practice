class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int rows = nums.size();
        int cols = nums[0].size();
        int ans = 0;
        
        for(auto &v : nums){
            sort(v.begin(),v.begin()+cols);
        }
        
        for(int i = 0; i<cols; i++){
            int maxi = INT_MIN;
            for(int j = 0; j<rows; j++){
                maxi = max(maxi,nums[j][i]);
            }
            ans+=maxi;
        }
        
        return ans;
    }
};