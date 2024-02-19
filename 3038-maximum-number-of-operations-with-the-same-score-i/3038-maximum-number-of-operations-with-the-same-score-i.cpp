class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int res = 0;
        int prev = -1;
        for(int i = 0; i<nums.size(); i+=2){
            int cur = nums[i] + nums[i+1];
            if(prev==-1 || prev==cur){
                res++;
                prev = cur;
            }
            else{
                break;
            }
        }
        return res;
    }
};