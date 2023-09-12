class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 0;
        int i = 0;
        int n = nums.size();
        
        while(i<n){
            if(nums[j]<nums[i++]){j++;}
        }
        
        return j;
    }
};