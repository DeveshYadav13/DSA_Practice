class Solution {
public:
    int minDeletions(string s) {
        int cnt = 0;
        
        unordered_map<int,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        
        int maxi = INT_MIN;
        for(auto it : mp){
            maxi = max(maxi,it.second);
        }
        
        vector<int>H(maxi+1,0);
        for(auto it : mp){
            H[it.second]++;
        }
        
        for(int i = maxi; i>=1; i--){
            if(H[i]>1){
                int j = i;
                int fit = H[j]-1;
               // cout<<fit<<" ";
                while(j--){
                    if(H[j]==0){
                        H[j]++;
                        fit--;
                        cnt+=i-j;
                        if(fit==0)break;
                    }
                }
                if(fit!=0){cnt+=i*fit;}
            }
        }
        
        return cnt;
    }
    
};