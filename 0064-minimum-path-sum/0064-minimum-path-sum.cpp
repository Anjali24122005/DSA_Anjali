class Solution {
public:
    int f(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(m<0 || n<0 ) return INT_MAX;
        if(m==0 && n==0) return grid[0][0];
        if(dp[m][n]!=-1) return dp[m][n];
        int up=f(m-1,n, grid,dp);
        int left=f(m, n-1,grid,dp);
        int sum=INT_MAX;
        if(up!=INT_MAX || left!=INT_MAX) sum=grid[m][n]+min(left,up);
        return dp[m][n]=sum;

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m, vector<int>(n,-1));

        return f(m-1,n-1,grid,dp);
    }
};


