class Solution {
public:
    // int f(int i, vector<int>&memo){
    //     if(i==0) return memo[0];
    //     if(i==1) return memo[1];

    //     return memo[i]+min(f(i-1, memo), f(i-2,memo));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        // int n=cost.size();
        // return min(f(n-1,cost),f(n-2,cost));
        int n=cost.size();
        vector<int>dp(n);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};

      