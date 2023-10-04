class Solution {
public:
    bool solve(int m, int limit, vector<int>&arr){
        long long cnt = 0;
        for(auto i : arr){
            if(i%m==0){cnt+=i/m;}
            else{
                cnt+=i/m+1;
            }
            if(cnt>limit){return false;}
        }
        return true;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        long long l = 1, r = *max_element(nums.begin(),nums.end())+1;  //+1 because if limit==0 is required  
        long long ans = LLONG_MAX;

        while(l<=r){
            long long m = l + (r-l)/2;

            if(solve(m,threshold,nums)){
                ans = min(ans,m);
                r = m-1;
            }	
            else{
                l = m+1;
            }
        }
        return ans;
    }
};