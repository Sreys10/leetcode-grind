class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();         // Number of rows
    int m = matrix[0].size();      // number of cols
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (matrix[i][j]==0){
                setrow(matrix, n,m,i);
                setcol(matrix, n,m,j);
            }
        }
      }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -100000) {
                matrix[i][j] = 0;
            }
        }
    }  
    }

    void setrow(vector<vector<int>>&matrix, int n, int m, int i){
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0){
                matrix[i][j]=-100000;
            }
        }
    }

    void setcol(vector<vector<int>> &matrix, int n, int m, int j){
        for(int i=0;i<n;i++){
            if (matrix[i][j]!=0){
                matrix[i][j]=-100000;
            }
        }
    }
    
    };
