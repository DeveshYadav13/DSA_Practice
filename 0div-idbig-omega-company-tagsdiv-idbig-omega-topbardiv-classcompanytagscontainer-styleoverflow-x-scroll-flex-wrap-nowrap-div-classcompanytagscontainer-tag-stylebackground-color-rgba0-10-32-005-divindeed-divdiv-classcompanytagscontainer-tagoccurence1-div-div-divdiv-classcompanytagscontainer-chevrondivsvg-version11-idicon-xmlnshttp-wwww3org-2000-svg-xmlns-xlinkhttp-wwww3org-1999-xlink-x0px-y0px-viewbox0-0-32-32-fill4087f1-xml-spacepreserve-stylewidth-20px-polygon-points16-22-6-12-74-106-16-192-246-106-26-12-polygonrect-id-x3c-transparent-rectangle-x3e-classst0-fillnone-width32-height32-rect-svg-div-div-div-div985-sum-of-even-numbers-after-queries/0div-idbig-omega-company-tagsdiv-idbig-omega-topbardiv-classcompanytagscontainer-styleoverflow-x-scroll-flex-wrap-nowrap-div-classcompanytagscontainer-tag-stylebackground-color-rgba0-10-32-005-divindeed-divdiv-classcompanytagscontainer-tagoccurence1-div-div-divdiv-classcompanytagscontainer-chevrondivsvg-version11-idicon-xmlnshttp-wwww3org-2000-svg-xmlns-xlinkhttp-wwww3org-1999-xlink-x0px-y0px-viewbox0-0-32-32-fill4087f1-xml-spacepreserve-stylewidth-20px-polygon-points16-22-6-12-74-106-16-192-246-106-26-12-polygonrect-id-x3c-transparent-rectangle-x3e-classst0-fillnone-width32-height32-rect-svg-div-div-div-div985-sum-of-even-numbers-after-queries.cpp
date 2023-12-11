class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evenSum = 0;
        for(auto i : nums){
            if(i%2==0)evenSum+=i;
        }
        
        vector<int>ans;
        for(auto i : queries){
            int val = i[0];
            int idx = i[1];
            if(nums[idx]%2==0){
                evenSum-=nums[idx];
            }
            nums[idx]+=val;
            if(nums[idx]%2==0){
                evenSum+=nums[idx];
            }
            
            ans.push_back(evenSum);
        }
        
        return ans;
    }
};