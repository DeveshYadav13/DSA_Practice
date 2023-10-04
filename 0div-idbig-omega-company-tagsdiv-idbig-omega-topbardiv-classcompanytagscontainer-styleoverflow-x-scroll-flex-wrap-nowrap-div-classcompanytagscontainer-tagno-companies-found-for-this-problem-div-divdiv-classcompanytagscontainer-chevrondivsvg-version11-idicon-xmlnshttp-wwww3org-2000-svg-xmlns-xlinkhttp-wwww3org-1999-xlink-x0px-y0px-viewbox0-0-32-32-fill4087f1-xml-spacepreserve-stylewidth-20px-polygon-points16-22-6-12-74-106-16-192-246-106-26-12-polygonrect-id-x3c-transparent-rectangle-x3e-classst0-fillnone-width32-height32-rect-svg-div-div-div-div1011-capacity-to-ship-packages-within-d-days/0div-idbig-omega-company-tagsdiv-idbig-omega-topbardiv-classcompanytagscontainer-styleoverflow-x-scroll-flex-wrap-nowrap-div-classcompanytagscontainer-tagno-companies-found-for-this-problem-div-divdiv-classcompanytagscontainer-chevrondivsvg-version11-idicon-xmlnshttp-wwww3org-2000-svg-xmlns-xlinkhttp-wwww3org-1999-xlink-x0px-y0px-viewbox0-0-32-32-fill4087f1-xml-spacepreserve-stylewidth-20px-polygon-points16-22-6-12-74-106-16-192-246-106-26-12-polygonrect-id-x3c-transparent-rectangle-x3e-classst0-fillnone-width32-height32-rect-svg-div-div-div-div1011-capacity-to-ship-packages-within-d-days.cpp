class Solution {
public:
    bool solve(int capacity, int d, vector<int>&weights){
        long long days = 0;
        long long curr = 0;
        for(auto i : weights){
            curr+=i;
            if(curr>capacity){
                days++;
                curr = i;
            }
            if(days>d){return false;}
        }
        if(curr>0){days++;}
        return days<=d;
    }
    
  int shipWithinDays(vector<int>& weights, int D) {
        long long l = *max_element(weights.begin(),weights.end());  // atleast this min weight capacity is required to transfer a package
    // anything lower than this then it is impossible to perform the shipment work.
    // case if n days i.e. each day 1 package

        long long r = 0;
        for(auto i: weights){r+=i;}    // r == sum of all elements -> if 1 day is given to transfer all packages

        long long ans = LLONG_MAX;
        while(l<=r){
            long long m = l+(r-l)/2;

            if(solve(m,D,weights)){
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