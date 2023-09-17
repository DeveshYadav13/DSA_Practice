class Solution {
public:
    int searchInsert(vector<int>& arr, int x){
        int n = arr.size();
        int idx = n;
        int l = 0, r = n-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(arr[m]>=x){
                idx = min(idx,m);
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return idx;
    }
};