class Solution {
public:
    // int climb(int n, vector<int>&memo){
    //     if(n<=1) return 1;

    //     if(memo[n]!=-1){
    //         return memo[n];
    //     }
    //     memo[n]=climb(n-1,memo)+climb(n-2,memo);
    //     return memo[n];
    // }
    int climbStairs(int n) {
        // vector<int>memo(n+1,-1);
        // return climb(n,memo);

        // int left= climbStairs(n-1);
        // int right= climbStairs(n-2);
        // return left+right;

        vector<int>dp(n+1);
        if(n<=1) return n;

        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        

    }
};