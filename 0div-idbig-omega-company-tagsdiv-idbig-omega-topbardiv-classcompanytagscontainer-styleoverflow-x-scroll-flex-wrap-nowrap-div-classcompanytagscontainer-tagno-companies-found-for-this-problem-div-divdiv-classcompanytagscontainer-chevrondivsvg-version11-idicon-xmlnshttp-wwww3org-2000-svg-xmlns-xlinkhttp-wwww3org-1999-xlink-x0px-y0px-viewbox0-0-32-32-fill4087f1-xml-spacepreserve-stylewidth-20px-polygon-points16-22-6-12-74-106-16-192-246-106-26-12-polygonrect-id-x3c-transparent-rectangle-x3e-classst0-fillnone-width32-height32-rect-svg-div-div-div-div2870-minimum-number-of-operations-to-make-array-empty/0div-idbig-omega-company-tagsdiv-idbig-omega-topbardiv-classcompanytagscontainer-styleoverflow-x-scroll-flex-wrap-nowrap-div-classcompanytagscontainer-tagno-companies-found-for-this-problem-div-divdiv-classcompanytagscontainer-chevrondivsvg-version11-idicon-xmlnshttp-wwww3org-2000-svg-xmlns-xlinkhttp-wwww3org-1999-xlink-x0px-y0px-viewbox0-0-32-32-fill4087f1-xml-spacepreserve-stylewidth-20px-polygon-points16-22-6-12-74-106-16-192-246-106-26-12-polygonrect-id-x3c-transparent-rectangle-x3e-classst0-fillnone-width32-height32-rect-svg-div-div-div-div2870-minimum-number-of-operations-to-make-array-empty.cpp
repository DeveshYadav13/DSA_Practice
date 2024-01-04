class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        
        int ans = 0;
        for(auto it : mp){
            int cnt = it.second;
            if(cnt==1){return -1;}
            
            int rem = cnt%3;
            
            if(rem==0){ans+=cnt/3;}
            else if(rem==2){
                cnt-=2;
                ans++;
                ans+=cnt/3;
            }
            else{
                cnt-=4;
                ans+=2;
                ans+=cnt/3;
            }
        }
        
        return ans;
        
        return ans;
    }
};