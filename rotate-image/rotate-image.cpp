class Solution {
public:
    void swap(int* a,int *b )
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(&matrix[i][j],&matrix[j][i]);
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            int m=matrix[i].size();
            for(int j=0;j<m/2;j++)
            {
                swap(&matrix[i][j],&matrix[i][m-j-1]);
            }
        }
    }
};