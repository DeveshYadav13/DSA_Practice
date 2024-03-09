class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(auto i : nums1){
            mp[i]++;
        }
        
        int mini = -1;
        for(auto i : nums2){
            if(mp[i]>0){
                if(mini==-1){
                    mini = i;
                    continue;
                }
                mini = min(mini,i);
            }
        }
        return mini;
    }
};