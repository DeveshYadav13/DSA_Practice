class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        
        //getting longest sequential prefix
        int val = nums[0];
        for(int i = 1 ; i<n; i++){
            if(nums[i]-nums[i-1]==1){val+=nums[i];}
            else{break;}
        }
        
        // getting smallest x
        unordered_map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        
        for(int x = val; ; x++){
            if(!mp[x]){return x;}
        }
        return -1;
    }
};