// class Solution {
// public:
//     void markrow(int row, vector<vector<int>>& matrix){
//         int cols=matrix[0].size();
//         for(int j=0;j<cols;j++){
//             if(matrix[row][j]!=0){
//                 matrix[row][j]=-1;
//             }
//         }
//     }
//     void markcol(int col, vector<vector<int>>& matrix){
//         int rows=matrix[0].size();
//         for(int i=0;i<rows;i++){
//             if(matrix[i][col]!=0){
//                 matrix[i][col]=-1;
//             }
//         }
//     }
//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows=matrix.size();
//         int cols=matrix[0].size();
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(matrix[i][j]==0){
//                     markrow(i,matrix);
//                     markcol(j,matrix);
//                 }
//             }
//         }
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstColHasZero = false;

        // Step 1: Mark rows and cols
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) firstColHasZero = true;
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 2: Set zeroes using the marks
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if (firstColHasZero)
                matrix[i][0] = 0;
        }
    }
};
