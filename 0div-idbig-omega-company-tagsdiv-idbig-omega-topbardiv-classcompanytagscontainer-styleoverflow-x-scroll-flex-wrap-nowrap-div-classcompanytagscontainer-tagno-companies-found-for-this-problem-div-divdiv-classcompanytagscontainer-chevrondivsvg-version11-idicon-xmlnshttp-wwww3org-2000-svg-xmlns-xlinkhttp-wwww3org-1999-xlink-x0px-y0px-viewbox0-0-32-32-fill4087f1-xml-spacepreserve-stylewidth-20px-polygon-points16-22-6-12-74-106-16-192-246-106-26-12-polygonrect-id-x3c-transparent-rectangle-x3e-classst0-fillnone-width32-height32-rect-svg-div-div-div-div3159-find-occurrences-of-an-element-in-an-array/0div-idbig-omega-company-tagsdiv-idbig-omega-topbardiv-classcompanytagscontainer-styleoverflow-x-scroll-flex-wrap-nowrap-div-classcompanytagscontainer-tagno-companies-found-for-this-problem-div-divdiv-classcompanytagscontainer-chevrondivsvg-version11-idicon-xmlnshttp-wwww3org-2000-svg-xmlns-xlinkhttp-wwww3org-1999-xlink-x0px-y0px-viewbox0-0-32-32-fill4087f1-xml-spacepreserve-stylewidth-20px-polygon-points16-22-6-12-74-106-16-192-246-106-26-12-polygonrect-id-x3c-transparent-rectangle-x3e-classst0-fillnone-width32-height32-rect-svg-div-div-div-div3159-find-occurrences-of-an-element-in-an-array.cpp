class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>occ;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==x){occ.push_back(i);}
        }
        
        vector<int>res;
        for(auto i : queries){
            if(i>occ.size()){res.push_back(-1);}
            else{ res.push_back(occ[i-1]);}
        }
        
        return res;
    }
};