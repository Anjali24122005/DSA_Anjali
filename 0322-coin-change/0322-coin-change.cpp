class Solution {
public:
    int f(vector<int>&coins, int amount, int n,vector<vector<int>>&dp){
        if(amount==0) return 0;
        if(n==0) return INT_MAX;

        if(dp[n][amount]!=-1) return dp[n][amount];
        int nottake=f(coins, amount, n-1,dp);
        int take=INT_MAX;
        if(coins[n-1]<=amount){
            int res=f(coins, amount-coins[n-1], n,dp);
            if(res!=INT_MAX){
                take=res+1;
            }
        }
        return dp[n][amount]=min(take, nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1,-1));
        int ans=f(coins, amount, n,dp);
        return (ans==INT_MAX)? -1 : ans;
    }
};