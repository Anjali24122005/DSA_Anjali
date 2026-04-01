class Solution {
public:
    int f(int i, int j, vector<vector<int>>& t,int n,vector<vector<int>>& dp){
        if(i==n-1) return t[i][j];

        if(dp[i][j]!=-1) return dp[i][j];
        int d=t[i][j]+f(i+1,j,t,n,dp);
        int dg=t[i][j]+f(i+1,j+1,t,n,dp);
        return dp[i][j]= min(d, dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        // int n= triangle.size();
        // vector<vector<int>> dp(n, vector<int>(n, -1));
        // return f(0,0,triangle,n,dp);

        int n= triangle.size();
        vector<int> dp=triangle[n-1];

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[j]=triangle[i][j]+min(dp[j],dp[j+1]);
            }
        }
        return dp[0];

        
    }
};

// 1
// 2 3
// 4 5 6