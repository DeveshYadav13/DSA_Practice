class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1;
        int n = matrix.size(), m = matrix[0].size();
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j]==0){
                    // mark ith row
                    matrix[i][0] = 0;
                    
                    // mark jth col
                    if(j==0){col0=0;}
                    else{
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        
        // fill all except 1st row and 1st col
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        // fill  1st row
        if(matrix[0][0]==0){
            for(int j = 0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
        
        // fill 1st col
        if(col0 == 0){
            for(int j = 0; j<n; j++){
                matrix[j][0]= 0;
            } 
        }
    }
};