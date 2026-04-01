class Solution {
public:
    // int f(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp){
    //     if(m<0 || n<0 ) return INT_MAX;
    //     if(m==0 && n==0) return grid[0][0];
    //     if(dp[m][n]!=-1) return dp[m][n];
    //     int up=f(m-1,n, grid,dp);
    //     int left=f(m, n-1,grid,dp);
    //     int sum=INT_MAX;
    //     if(up!=INT_MAX || left!=INT_MAX) sum=grid[m][n]+min(left,up);
    //     return dp[m][n]=sum;

    // }


    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // vector<vector<int>> dp(m, vector<int>(n));
        // dp[0][0]=grid[0][0];

        // // int sum=INT_MAX;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(i==0 && j==0) continue;

        //         int bottom=INT_MAX, right=INT_MAX;
        //         if(i>0) bottom=dp[i-1][j];
        //         if(j>0) right=dp[i][j-1];
        //         dp[i][j]=grid[i][j]+min(bottom, right);
        //     }
        // }

        // // return f(m-1,n-1,grid,dp);
        // return dp[m-1][n-1];

        vector<int>dp(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[j]=grid[i][j];

                else{
                    int up=INT_MAX, left=INT_MAX;
                    if(i>0) up=dp[j];
                    if(j>0) left=dp[j-1];
                    dp[j]=grid[i][j]+min(left,up);
                }
            }
        }
        return dp[n-1];
        
    }
};





