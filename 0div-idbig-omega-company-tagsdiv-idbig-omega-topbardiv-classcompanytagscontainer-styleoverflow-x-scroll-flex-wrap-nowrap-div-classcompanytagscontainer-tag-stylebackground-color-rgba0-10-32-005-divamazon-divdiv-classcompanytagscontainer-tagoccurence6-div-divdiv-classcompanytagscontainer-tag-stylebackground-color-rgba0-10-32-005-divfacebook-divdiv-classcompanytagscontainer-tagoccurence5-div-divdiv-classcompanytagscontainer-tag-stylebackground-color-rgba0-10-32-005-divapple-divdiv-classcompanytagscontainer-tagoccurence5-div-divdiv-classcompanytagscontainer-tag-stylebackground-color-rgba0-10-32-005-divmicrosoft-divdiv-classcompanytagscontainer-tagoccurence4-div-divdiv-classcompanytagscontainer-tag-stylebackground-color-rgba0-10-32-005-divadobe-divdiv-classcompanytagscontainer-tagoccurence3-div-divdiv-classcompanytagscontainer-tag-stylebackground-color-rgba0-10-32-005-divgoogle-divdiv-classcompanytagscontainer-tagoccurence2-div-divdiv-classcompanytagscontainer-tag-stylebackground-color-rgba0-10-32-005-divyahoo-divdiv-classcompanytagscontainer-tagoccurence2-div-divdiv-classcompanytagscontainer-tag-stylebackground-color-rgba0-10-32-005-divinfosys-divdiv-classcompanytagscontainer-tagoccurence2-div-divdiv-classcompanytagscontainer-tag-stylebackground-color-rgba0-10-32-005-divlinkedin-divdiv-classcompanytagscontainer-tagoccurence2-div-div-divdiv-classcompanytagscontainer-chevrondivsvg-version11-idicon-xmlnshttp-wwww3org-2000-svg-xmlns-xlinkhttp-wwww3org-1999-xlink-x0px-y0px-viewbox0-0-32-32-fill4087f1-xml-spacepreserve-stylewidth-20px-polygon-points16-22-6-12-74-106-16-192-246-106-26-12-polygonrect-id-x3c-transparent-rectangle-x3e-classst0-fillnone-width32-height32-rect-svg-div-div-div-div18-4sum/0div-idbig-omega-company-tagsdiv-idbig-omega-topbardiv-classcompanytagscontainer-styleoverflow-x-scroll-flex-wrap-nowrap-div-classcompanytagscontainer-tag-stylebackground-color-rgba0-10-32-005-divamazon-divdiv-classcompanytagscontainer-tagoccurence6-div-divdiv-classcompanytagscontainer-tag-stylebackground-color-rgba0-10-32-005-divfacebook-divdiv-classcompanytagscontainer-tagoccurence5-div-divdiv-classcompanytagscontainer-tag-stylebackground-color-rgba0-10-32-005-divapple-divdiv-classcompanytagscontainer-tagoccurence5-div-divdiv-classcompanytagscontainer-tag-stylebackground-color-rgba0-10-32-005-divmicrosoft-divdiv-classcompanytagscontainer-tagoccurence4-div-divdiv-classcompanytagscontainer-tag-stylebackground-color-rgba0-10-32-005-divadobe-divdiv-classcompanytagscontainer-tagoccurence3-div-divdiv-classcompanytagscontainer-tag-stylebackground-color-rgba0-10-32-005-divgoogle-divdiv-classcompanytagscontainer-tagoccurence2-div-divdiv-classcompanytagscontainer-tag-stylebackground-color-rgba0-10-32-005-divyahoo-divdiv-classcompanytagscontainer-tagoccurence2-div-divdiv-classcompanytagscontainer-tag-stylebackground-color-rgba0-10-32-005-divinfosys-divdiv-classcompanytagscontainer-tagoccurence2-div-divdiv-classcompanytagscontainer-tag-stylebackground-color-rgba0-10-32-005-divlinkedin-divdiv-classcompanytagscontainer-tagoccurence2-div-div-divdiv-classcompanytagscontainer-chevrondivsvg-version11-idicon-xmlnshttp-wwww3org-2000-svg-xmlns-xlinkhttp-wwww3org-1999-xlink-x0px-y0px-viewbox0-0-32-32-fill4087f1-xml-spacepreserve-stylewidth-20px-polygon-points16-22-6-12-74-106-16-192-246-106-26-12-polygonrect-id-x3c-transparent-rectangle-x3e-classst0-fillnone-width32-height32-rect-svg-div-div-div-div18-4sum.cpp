class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                set<long long int>hash;
                for(int k = j+1; k<n; k++){
                        long long int sum = nums[i]+nums[j];
                        sum+=nums[k];
                        long long int rem = target-sum;
                        if(hash.find(rem)!=hash.end()){
                            vector<int>temp = {nums[i],nums[j],nums[k],(int)rem};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                        hash.insert(nums[k]);
                    }
                }
            }
    
        
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};