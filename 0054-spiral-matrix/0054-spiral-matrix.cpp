class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> res; 
        //dimensions
        int row = matrix.size();
        int col = matrix[0].size();
        
        //total elements
        int totalEle = row * col;
        int count =0;
        
        
        //indices
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;
        
        while(count < totalEle){
            //print startRow
            for(int i = startCol;count < totalEle && i<=endCol;i++){
                res.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            
            //print endCol
            for(int i = startRow;count < totalEle && i<=endRow;i++){
                res.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //print endRow
            for(int i=endCol;count < totalEle && i>=startCol;i--){
                res.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            //print startCol
            for(int i=endRow;count < totalEle && i>=startRow;i--){
                res.push_back(matrix[i][startCol]);
                    count++;
            }
            startCol++;
        }
        return res;
    }
    
};