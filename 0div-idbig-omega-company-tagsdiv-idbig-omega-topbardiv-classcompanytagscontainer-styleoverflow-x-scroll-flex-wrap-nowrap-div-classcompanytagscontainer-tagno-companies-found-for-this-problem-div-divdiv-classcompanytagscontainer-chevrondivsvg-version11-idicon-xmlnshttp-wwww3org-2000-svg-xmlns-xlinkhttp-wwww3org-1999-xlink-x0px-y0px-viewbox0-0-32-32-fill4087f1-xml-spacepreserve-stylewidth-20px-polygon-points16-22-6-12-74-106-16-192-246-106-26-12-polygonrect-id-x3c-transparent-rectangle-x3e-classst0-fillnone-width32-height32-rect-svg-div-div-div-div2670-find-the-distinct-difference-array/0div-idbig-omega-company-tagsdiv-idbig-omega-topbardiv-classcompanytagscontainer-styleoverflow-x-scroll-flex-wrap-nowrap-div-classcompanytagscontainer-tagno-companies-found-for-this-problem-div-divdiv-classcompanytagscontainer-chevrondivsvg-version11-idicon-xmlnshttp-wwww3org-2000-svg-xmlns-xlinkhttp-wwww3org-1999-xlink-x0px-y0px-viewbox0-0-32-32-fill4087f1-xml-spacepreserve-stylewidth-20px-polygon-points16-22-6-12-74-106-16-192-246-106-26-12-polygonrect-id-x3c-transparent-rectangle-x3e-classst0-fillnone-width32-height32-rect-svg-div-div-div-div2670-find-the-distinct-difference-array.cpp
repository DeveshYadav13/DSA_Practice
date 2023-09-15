class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        
        int cnt = 0; // cnt distinct from back
        for(auto i : nums){
            mp[i]++;
        }
        
        for(auto it : mp){
            if(it.second>0){cnt++;}
        }
        
        unordered_set<int>st;  // cnt distinct from start
        
        for(auto i : nums){
            st.insert(i);
            mp[i]--;
            if(mp[i]==0){cnt--;}
            
            ans.push_back(st.size()-cnt);
        }
        
        return ans;
    }
};