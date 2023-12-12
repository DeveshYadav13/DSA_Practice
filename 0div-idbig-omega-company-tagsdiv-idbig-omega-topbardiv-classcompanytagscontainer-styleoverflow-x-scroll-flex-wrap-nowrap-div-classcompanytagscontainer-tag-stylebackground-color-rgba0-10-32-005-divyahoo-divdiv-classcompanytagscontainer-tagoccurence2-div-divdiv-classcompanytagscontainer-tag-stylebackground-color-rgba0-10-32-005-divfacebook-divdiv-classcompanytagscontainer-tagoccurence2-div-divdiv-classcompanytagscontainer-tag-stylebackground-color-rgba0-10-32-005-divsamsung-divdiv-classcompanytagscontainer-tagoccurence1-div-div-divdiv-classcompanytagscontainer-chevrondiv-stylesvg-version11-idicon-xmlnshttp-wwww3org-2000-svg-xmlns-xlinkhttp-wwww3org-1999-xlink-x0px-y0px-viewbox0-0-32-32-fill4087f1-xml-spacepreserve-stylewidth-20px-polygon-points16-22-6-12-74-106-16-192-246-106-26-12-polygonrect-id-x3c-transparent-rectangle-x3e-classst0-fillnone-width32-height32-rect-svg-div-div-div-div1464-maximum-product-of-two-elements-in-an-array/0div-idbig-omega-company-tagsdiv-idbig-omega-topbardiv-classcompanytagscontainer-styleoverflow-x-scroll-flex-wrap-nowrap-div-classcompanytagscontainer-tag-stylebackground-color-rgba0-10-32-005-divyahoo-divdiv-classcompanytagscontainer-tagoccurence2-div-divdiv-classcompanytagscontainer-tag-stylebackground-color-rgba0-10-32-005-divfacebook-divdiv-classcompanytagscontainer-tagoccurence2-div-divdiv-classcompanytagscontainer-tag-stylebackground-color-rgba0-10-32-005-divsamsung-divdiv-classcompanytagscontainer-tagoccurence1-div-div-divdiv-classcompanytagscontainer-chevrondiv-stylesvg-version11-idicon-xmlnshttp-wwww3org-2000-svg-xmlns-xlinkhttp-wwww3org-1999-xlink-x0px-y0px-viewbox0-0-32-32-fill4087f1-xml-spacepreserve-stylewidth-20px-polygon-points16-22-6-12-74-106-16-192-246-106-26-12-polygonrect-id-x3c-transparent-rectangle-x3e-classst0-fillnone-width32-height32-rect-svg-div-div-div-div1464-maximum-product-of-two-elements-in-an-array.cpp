class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN, smx = INT_MIN;
        for(auto i : nums){
            if(i>=mx){
                smx = mx;
                mx = i;
            }
            else if(i>smx){
                smx = i;
            }
        }
        
        return (smx-1)*(mx-1);
    }
};