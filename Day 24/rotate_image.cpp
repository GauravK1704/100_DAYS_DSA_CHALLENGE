class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=m;
            int i,j;
            for(i=0; i<m; i++){
                for(j=i; j<n; j++){
                    swap(matrix[i][j],matrix[j][i]); // Transpose of the matrix
                }
            }
            for(i=0; i<n; i++){
                reverse(matrix[i].begin() , matrix[i].end()); // Revrse of the row 
            }
            
        }
    };