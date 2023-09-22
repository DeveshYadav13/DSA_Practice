class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {    
        // create a sorted version of nums
        // check the leftmost and rightmost indexes where both arrays differ
        // basically we have to sort in this window to get the answer
        
        vector<int>temp = nums;
        int n = nums.size();
        sort(temp.begin(),temp.end());
        
        int l = 0;
        while(l<n && temp[l]==nums[l]){
            l++;
        }
        if(l==n){return 0;}
        
        int r = n-1;
        while(r>=0 && temp[r]==nums[r]){
            r--;
        }
        
        return r-l+1;
    }
};