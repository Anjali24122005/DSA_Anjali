class Solution {
public:
    // int f(int i, int j,vector<vector<int>>& grid, vector<vector<int>>& dp){
    //     if(i<0 || j<0) return 0;

    //     if(grid[i][j]==1) return 0;
    //     if(i==0 && j==0) return 1;
    //     if(dp[i][j]!=-1) return dp[i][j];

    //     return dp[i][j]=f(i-1,j,grid,dp)+f(i,j-1,grid,dp);
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        // int m = obstacleGrid.size();
        // int n = obstacleGrid[0].size();
        
        // vector<vector<int>>dp(m, vector<int>(n, 0));
        // if(obstacleGrid[0][0] == 1) return 0;
        // dp[0][0] = 1;
        //  for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(obstacleGrid[i][j] == 1){
        //             dp[i][j] = 0;
        //             continue;
        //         }
        //         if(i == 0 && j == 0) continue;

        //         int right=0, bottom=0;
        //         if(i>0) bottom=dp[i-1][j];
        //         if(j>0) right=dp[i][j-1];
        //         dp[i][j]=bottom+right;
        //     }
        //  }
        // // return f(m-1,n-1,obstacleGrid,dp);
        // return dp[m-1][n-1];

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<int>dp(n,0);
        dp[0]=(obstacleGrid[0][0]==0)?1:0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) dp[j]=0;
                else if(j>0){
                    dp[j]=dp[j]+dp[j-1];
                }
            }
        }
        return dp[n-1];
    }
};

// [0,0,0]
// [0,1,0]
// [0,0,0]