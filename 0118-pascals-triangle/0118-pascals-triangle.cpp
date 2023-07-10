class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);

        for(int i=0;i<numRows;i++){
            res[i].resize(i+1);
            //starts with 1 and ends with 1
            res[i][0] = res[i][i] = 1;

            //addition logic in middle
            for(int j=1;j<i;j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};