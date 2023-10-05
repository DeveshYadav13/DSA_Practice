class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size(), m = arr[0].size();
        
        
        for(int i = 0; i<n; ++i){
            if(target>arr[i][m-1]){continue;}  // target lies in greater row
            
            // apply binary search on this row
            int l = 0, r = m-1;
            while(l<=r){
                int mid = l + (r-l)/2;
                if(arr[i][mid]==target){return true;}
                else if(arr[i][mid] < target){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }
        
        return false;
    }
};