//https://leetcode.com/problems/game-of-life/solutions/7245509/c-solutions
class Solution {
    public:
        void gameOfLife(vector<vector<int>>& board)
        {
            int r = board.size();
            int c = board[0].size();
    
            int dirR[] = {0,0,1,1,1,-1,-1,-1};
            int dirC[] = {1,-1,-1,0,1,-1,0,1};
            
            vector<vector<int>> matrix(r,vector<int>(c));
    
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    int live = 0;
                    for(int d=0; d<8; d++)
                    {
                        int rr = i+dirR[d];
                        int cc = j+dirC[d];
                        
                        if(rr<r && cc<c && rr>=0 && cc>=0)
                        {
                            if(board[rr][cc]!=0) live++;
                        }
                    }
                    if(board[i][j] && live<2) matrix[i][j]=0;
                    else if(board[i][j] && (live==2 || live==3)) matrix[i][j]=1;
                    else if(board[i][j] && live>3) matrix[i][j]=0;
                    else if(!board[i][j] && live==3) matrix[i][j]=1;
                    else matrix[i][j]=0;
                }
            }
    
            board = matrix;
    
        }
    };