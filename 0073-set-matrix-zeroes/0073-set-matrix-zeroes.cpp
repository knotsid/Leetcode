class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col= matrix[0].size();

        vector<int> trow(row, -1);
        vector<int> tcol(col, -1);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    trow[i] = 0;
                    tcol[j] = 0;
                }
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(trow[i] == 0 || tcol[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};