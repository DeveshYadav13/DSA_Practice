class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        int s = arr.size();
        int res=0;
        if (s<2)  return 0;
        sort(arr.begin(),arr.end());        
        for (int i=1; i<s; ++i) {
            if (arr[i]<=arr[i-1]){
                res+=arr[i-1]+1 -arr[i];
                arr[i]= arr[i-1]+1;
            }
        }
        return res;
    }
};