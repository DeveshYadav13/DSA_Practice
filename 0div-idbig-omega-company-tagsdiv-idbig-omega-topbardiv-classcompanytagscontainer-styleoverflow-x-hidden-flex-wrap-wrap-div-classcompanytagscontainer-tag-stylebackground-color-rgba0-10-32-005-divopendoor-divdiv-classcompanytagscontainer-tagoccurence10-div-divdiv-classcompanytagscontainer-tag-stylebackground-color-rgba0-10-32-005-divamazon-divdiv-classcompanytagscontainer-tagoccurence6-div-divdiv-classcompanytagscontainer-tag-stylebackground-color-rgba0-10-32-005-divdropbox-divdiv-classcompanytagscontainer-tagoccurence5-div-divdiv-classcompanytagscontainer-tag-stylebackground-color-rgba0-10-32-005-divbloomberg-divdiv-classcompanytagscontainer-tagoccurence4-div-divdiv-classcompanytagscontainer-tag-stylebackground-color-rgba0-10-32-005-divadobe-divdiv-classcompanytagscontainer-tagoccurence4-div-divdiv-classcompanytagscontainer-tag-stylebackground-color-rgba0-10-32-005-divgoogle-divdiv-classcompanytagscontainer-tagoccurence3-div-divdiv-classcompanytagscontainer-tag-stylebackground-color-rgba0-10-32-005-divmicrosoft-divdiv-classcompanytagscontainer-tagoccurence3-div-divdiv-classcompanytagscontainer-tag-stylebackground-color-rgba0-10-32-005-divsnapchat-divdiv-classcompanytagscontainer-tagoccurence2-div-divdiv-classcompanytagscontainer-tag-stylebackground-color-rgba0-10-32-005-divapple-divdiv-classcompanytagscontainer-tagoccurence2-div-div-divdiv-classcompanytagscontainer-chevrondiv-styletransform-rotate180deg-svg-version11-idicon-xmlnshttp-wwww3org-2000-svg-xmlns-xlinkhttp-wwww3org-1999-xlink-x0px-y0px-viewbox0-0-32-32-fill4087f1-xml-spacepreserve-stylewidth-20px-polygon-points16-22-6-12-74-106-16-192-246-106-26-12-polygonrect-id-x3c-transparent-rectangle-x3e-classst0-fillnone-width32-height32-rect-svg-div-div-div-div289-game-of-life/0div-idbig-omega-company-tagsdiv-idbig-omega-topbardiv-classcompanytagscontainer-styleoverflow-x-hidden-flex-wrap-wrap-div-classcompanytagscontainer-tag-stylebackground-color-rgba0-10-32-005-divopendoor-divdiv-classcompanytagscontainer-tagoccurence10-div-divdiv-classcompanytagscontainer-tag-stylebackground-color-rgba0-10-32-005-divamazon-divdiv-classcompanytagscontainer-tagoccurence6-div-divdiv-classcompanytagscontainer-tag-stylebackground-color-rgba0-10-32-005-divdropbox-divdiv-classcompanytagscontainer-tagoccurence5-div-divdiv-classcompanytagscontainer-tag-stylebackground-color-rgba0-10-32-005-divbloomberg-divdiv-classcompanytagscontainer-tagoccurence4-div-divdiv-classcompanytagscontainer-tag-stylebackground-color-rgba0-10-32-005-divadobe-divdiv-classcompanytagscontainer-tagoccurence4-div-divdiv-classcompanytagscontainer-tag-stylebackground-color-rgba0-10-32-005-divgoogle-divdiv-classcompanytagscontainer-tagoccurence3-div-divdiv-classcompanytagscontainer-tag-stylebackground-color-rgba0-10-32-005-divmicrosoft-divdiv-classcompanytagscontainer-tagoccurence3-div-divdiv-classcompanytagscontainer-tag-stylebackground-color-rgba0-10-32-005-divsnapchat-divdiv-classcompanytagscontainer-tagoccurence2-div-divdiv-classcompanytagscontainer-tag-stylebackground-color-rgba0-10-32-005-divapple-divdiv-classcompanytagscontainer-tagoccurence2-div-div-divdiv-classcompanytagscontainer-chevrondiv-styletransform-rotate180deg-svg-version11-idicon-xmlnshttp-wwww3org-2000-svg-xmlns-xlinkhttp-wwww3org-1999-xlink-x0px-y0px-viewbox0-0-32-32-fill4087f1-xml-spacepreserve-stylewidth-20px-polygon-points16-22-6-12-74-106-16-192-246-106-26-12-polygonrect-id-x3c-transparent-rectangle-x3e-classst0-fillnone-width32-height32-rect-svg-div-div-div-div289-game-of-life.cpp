class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int,int>>flip;
        int rows = board.size();
        int cols = board[0].size();
        
        for(int r = 0; r<rows; r++){
            for(int c = 0; c<cols; c++){
                
                int cntLive = 0;
                for(int dr = -1; dr<=1; dr++){
                    for(int dc = -1; dc<=1; dc++){
                        if(dr==0 && dc==0){continue;}
                        int nr = r+dr;
                        int nc = c+dc;
                        
                        if(nr>=0 && nr<=rows-1 && nc>=0 && nc<=cols-1 && board[nr][nc]==1){
                            cntLive++;
                        }
                    }
                }
                
                if(board[r][c]==1){
                    if(cntLive<2 || cntLive>3){flip.push_back({r,c});}
                }
                else{
                    if(cntLive==3){flip.push_back({r,c});}
                }
            }
        }
        
        for(auto i : flip){
            if(board[i.first][i.second]==1){
                board[i.first][i.second]=0;
            }
            else{
                board[i.first][i.second]=1;
            }
        }
    }
};