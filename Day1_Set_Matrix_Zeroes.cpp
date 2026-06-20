//SET MATRIX ZEROES
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int total_rows = matrix.size();
        int total_cols = matrix[0].size();
        int col0 = 1;
        for(int i=0;i<total_rows;i++){
            for(int j=0;j<total_cols;j++){
                if(matrix[i][j]==0){
                    if(j==0){
                        col0=0;
                    }
                    else{
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                    }

                }

            }
        }
        for(int i=1;i<total_rows;i++){
            for(int j=1;j<total_cols;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<total_cols;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<total_rows;i++){
                matrix[i][0]=0;
            }
            
        }

        
    }
};