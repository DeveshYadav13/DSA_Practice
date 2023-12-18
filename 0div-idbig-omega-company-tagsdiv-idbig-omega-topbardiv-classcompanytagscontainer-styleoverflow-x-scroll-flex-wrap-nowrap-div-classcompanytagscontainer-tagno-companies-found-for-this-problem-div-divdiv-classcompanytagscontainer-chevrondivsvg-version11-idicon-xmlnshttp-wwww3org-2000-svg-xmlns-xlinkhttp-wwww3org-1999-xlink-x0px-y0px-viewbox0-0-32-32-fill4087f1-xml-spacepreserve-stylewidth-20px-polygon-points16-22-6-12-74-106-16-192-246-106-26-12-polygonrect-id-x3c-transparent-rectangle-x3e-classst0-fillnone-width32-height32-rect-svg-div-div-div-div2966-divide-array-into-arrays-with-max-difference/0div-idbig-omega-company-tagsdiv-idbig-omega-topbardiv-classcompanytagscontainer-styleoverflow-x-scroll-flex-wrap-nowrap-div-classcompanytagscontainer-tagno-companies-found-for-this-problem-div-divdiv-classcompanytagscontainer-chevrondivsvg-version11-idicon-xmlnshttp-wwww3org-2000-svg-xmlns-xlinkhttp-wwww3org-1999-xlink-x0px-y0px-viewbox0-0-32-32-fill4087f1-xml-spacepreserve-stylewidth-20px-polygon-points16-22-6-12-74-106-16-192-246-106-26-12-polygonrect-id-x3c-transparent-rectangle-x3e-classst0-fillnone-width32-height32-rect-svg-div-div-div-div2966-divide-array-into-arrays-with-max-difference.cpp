class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i = 0 ; i<nums.size()-1; i+=3){
            if(nums[i+1]-nums[i]<=k && (i>=nums.size()-2 || nums[i+2]-nums[i]<=k)){
                vector<int>v;
                v.push_back(nums[i]);
                v.push_back(nums[i+1]);
                v.push_back(nums[i+2]);
                ans.push_back(v);
            }
            else{
                ans.clear();
                return ans;
            }
        }
        return ans;
    }
};