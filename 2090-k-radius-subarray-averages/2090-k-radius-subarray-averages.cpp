class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();   
        if(2*k>=n){
            vector<int>temp(n,-1);
            return temp;
        }
        
        vector<int>temp;
        for(int i = 0; i<k; i++){
            temp.push_back(-1);
        }
        
        int validEle = (n-2*k);
        
        long long s = 0;
        for(int i = 0; i<=2*k;i++){
            s+=nums[i];
        }
        int val = s/(2*k+1);
        temp.push_back(val);
        validEle--;
        
        int r = 2*k+1;
        int l = 0;
        while(validEle--){
            s-=nums[l++];
            s+=nums[r++];
            int val = s/(2*k+1);
            temp.push_back(val);
        }
        
        while(temp.size()!=n){
            temp.push_back(-1);
        }
        
        return temp;  
    }
};