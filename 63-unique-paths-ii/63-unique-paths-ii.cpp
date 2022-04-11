class Solution {
public:
    int knapSack(int n, int m, vector<vector<int>> &dp, vector<vector<int>> &matrix)
    {
        if( n<0 || m<0 )
            return 0;
        if(n==0 and m==0)
            return 1;
        if(matrix[n][m] == 1) 
            return 0;
        if(dp[n][m] != -1)
            return dp[n][m];
        return dp[n][m] = knapSack(n-1, m, dp, matrix) + knapSack(n, m-1, dp, matrix);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(obstacleGrid[n-1][m-1]==1 or obstacleGrid[0][0]==1)
            return 0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return knapSack(n-1,m-1,dp,obstacleGrid);
    }
};
// class Solution {
// public:
//     vector<vector<int>> directions {{0, 1}, {1, 0}};
//     void dfs(int row, int col, int &count, vector<vector<int>>& matrix) 
//     {
//          if(row<0 || col<0 || row>=matrix.size() || col>=matrix[0].size() || 
//                 matrix[row][col] == 1 
//               )
//                 return;
//         if( row==matrix.size()-1 and col==matrix[0].size()-1 ){
//                 count++;
//         }
//         for(int i=0; i<directions.size(); i++) {
//             int newRow = row + directions[i][0];
//             int newCol = col + directions[i][1];
//             dfs(newRow, newCol, count, matrix);
//         }
//     }
    
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         vector<vector<int>> visited(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
//         int row=0, col=0, count =0;
//         if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == 1
//            || obstacleGrid[row][col] == 1
//           ) return 0;
//         dfs(row, col, count, obstacleGrid);
//         return count;
//     }
// };