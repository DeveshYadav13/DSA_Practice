class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lmov = INT_MIN, rmov = INT_MIN;
        if(left.size()!=0) lmov = *max_element(left.begin(),left.end());
        if(right.size()!=0) rmov = n - *min_element(right.begin(),right.end());
        return max(lmov,rmov);
    }
};