class Solution {
public:
    long long calcHours(int m, vector<int>&v){
        long long cnt = 0;
        for(auto i : v){
            if(i%m==0){cnt+=i/m;}
            else{
                cnt+=i/m+1;
            }
        }
        return cnt;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r = *max_element(piles.begin(),piles.end());
        long long ans = LLONG_MAX;

        while(l<=r){
            long long m = l + (r-l)/2;
            long long hrs = calcHours(m, piles);
            //cout<<m<<" "<<hrs<<"\n";
            if(hrs<=h){
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