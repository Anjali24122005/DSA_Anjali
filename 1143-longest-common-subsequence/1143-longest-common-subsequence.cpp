class Solution {
public:
    // int f(string text1, string text2, int m, int n,vector<vector<int>>&dp){
    //     if(n==0 || m==0) return 0;

    //     if(dp[m][n]!=-1) return dp[m][n];
    //     if(text1[m-1]==text2[n-1]){
    //         dp[m][n]= 1+f(text1, text2, m-1,n-1,dp);
    //     }else{
    //         dp[m][n]= max(f(text1, text2, m, n-1,dp), f(text1, text2, m-1, n,dp));
    //     }
    //     return dp[m][n];
    // }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        if(n==0 || m==0) return 0;
        vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
        // return f(text1, text2, m,n,dp);

        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};



