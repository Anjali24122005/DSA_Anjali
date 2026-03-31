class Solution {
public:
    // int f(int m, int n, vector<vector<int>>&dp){
    //     if(m==0 || n==0) return 0;
    //     if(m==1 && n==1) return 1;

    //     if(dp[m][n]!=-1) return dp[m][n];

    //     dp[m][n]=f(m-1,n,dp)+f(m,n-1,dp);
    //     return dp[m][n];
    // }
    int uniquePaths(int m, int n) {
        // vector<vector<int>>dp(m+1, vector<int>(n+1,-1));
        // return f(m,n,dp);

        // vector<vector<int>>dp(m+1, vector<int>(n+1,0));
        // // if(m==0 || n==0) return 0;
        // // dp[1][1]=1;
        // for(int i=1;i<m+1;i++){
        //     for(int j=1;j<n+1;j++){
        //         if(i==1 && j==1)dp[i][j]=1;
        //         else{
        //         int bottom=0, right=0;
        //         if(i>1) bottom = dp[i-1][j];
        //         if(j>1) right=dp[i][j-1];
        //         dp[i][j]=bottom+right;
        //         }
        //     }
        // }
        // return dp[m][n];

        vector<int>dp(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[j]=dp[j]+dp[j-1];//1+1=2  1+
            }
        }
        return dp[n-1];
    }
};