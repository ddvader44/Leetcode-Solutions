class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int size = matrix.size();
        int insideSize = matrix[0].size();
        vector<vector<int>> newMatrix(insideSize, vector<int>(size));
        for(int i=0;i<size;i++){
            for(int j=0;j<insideSize;j++){
                newMatrix[j][i] = matrix[i][j];
            }
        }
        return newMatrix;
    }
};