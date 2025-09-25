class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            
            int n= matrix.size();
            int m = matrix[0].size();
            int i,j;
            vector<int>rowFlag(n,0);
            vector<int>colFlag(m,0);
            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    if(matrix[i][j]==0){
                        rowFlag[i]=1;
                        colFlag[j]=1;
                    }
                }
            }
              for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    if(rowFlag[i] || colFlag[j]){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    };