class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        
        // we need to perform binary search 2 times
        // 1st : we need to apply on 1st column of matrix to get the row to look for
        // while doing 1st - look for smallest i such that matrix[i][0] < target.
        
        int i = 0, j = n-1;
        int row = 0;
        while(i<=j){
            int mid = i + (j-i)/2;
            
            if(matrix[mid][0]==target){return true;}
            else if(matrix[mid][0] < target){
                row = mid;
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        
        // now we know what is the row that we have to search for 
        // Now we can apply the second binary search to look for target in that particular row
        // 2nd : we need to apply bs on row'th row 
        
        int l = 0, r = m-1;
        while(l<=r){
            int md = l+(r-l)/2;
            
            if(matrix[row][md]==target){return true;}
            else if(matrix[row][md]<target){
                l = md+1;
            }
            else{
                r = md-1;
            }
        }
        
        return false;
    }
};