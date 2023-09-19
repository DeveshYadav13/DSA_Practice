class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        
        int l = 0, r = n-1;
        int m;
        int mini = INT_MAX;
        
        while(l<=r){
            m = l + (r-l)/2;
            
            
            // if left part sorted
            if(arr[m]>=arr[l]){
                mini = min(mini,arr[l]);       // i.e. right part unsorted bcs of rotation 
                l = m + 1;          // it means it contains min element which got rotated
            }
            
            // if right part sorted
            else{
                mini = min(mini,arr[m]);
                r = m-1;
            }
        }
        return mini;
    }
};