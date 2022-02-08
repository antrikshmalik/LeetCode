class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x=0, y=0;
        vector<vector<int>> newMat(r, vector<int>(c));
        if(mat.size()*mat[0].size() != r*c) return mat;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                newMat[x][y] = mat[i][j];
                y++;
                if(y == c){
                    y=0;
                    x++;
                }
            }
        }
        return newMat;
    }
};