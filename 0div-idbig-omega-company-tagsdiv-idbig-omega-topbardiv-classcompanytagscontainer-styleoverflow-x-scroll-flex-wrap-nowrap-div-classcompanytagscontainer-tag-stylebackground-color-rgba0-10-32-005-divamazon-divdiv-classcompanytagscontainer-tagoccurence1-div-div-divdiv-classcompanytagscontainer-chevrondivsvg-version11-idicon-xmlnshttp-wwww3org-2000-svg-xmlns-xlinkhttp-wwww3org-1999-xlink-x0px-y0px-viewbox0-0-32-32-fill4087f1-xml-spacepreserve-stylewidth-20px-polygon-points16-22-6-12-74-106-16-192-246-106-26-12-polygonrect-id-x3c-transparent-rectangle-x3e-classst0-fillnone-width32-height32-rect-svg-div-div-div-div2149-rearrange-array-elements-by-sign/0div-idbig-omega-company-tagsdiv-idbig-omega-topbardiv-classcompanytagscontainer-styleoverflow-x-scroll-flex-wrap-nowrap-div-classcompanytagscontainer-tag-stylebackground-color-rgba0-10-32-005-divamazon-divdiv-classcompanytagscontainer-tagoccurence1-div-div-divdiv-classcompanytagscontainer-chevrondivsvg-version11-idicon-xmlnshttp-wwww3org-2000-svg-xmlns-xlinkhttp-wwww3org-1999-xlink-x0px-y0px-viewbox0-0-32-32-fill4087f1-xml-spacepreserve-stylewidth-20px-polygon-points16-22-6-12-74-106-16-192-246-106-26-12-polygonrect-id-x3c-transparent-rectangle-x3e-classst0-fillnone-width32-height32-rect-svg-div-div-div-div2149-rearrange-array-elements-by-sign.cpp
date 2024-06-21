class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto i : nums){
            if(i>0) pos.push_back(i);
            else neg.push_back(i);
        }
        
        int it = 0;
        for(int i = 0; i<nums.size(); i+=2, it++){
            nums[i] = pos[it];
            nums[i+1] = neg[it];
        }
        
        return nums;
    }
};