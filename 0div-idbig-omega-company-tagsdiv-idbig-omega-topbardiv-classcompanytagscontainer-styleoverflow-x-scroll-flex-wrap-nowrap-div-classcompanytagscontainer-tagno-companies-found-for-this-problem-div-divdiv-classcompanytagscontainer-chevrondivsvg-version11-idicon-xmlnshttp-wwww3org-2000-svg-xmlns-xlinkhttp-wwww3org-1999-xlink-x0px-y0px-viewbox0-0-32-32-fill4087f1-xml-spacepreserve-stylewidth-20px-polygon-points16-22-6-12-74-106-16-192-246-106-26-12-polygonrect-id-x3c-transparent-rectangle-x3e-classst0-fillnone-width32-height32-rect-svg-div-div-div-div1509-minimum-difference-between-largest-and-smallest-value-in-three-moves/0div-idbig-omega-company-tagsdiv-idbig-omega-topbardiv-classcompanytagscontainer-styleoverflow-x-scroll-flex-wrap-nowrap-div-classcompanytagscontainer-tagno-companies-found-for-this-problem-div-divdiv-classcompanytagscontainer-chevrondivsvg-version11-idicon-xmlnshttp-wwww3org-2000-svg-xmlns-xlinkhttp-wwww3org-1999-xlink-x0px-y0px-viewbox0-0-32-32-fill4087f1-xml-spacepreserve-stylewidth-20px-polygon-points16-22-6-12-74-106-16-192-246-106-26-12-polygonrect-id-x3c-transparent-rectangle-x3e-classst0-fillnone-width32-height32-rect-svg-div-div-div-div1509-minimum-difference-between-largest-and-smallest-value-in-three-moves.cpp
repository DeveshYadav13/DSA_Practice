class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=4){return 0;}
        
        sort(nums.begin(),nums.end());
        priority_queue<int>diff;
        int ans = nums.back() - nums[0];
        for(int i = 0; i <= 3; i++) {
            ans = min(ans, nums[nums.size() - (3 - i) - 1] - nums[i]);
        }

        // for(int i = 1; i<n; i++){
        //     diff.push(nums[i]-nums[i-1]);
        // }
        
        // diff.pop();
        // diff.pop();
        // diff.pop();
        // return diff.top();
            
        return ans;
    }
};