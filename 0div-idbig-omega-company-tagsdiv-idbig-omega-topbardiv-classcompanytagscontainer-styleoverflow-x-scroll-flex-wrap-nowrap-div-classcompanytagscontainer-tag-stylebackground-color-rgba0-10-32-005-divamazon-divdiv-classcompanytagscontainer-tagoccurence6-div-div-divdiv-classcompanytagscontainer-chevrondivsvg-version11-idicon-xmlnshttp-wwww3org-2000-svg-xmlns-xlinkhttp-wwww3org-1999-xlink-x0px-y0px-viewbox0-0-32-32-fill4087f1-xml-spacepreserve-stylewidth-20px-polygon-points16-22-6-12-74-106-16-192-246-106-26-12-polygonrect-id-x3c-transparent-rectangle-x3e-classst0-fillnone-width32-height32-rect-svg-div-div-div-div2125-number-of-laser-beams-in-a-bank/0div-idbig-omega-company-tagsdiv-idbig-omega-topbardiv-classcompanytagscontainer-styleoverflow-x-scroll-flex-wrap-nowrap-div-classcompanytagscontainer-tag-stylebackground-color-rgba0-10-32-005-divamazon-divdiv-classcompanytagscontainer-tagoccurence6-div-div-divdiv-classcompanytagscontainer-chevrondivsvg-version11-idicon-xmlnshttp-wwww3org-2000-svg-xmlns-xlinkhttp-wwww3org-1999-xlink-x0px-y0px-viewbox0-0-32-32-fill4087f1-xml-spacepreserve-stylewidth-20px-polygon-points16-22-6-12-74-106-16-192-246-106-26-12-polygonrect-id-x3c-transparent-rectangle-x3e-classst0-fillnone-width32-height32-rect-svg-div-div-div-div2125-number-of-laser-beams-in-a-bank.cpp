class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int curr = 0;
        int prev = 0;
        int ans = 0;
        int n = bank.size();
        
        for(int i = n-1; i>=0; i--){
            curr = 0;
            for(auto c : bank[i]){
                curr+=(c=='1');
            }
            if(prev!=0){
                ans+=(curr*prev);
            }
            if(curr!=0)prev = curr;
        }
        
        return ans;
    }
};