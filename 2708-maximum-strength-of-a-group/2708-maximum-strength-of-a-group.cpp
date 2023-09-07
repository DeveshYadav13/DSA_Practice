#define ll long long
class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long prod = 1;
        int largestNegative = INT_MIN, largest = INT_MIN, negCount = 0;
        for(auto n: nums){
            if(n) prod *= n;
            if(n < 0 ) { largestNegative = max(largestNegative, n); negCount++; }
            largest = max(largest, n);
        }
        if(largest == 0 && negCount < 2) return 0;
        if(largest < 0 && negCount == 1) return largestNegative;
        if(prod > 0 ) return prod;
        return prod/largestNegative;
    }
};