class Solution {
public:
    bool f(vector<int>& nums, int sum, int ind, vector<vector<int>>&dp){
        if(sum==0) return true;
        if(ind==0) return nums[0]==sum;
        if(dp[ind][sum]!=-1) return dp[ind][sum];

        bool nottake=f(nums, sum, ind-1,dp);
        bool take=false;
        if(nums[ind]<=sum) take=f(nums, sum-nums[ind], ind-1, dp);
        return dp[ind][sum]=take || nottake;
        
    }
    bool canPartition(vector<int>& nums) {
        int totsum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++) totsum+=nums[i];
        vector<vector<int>> dp(n+1, vector<int>(totsum,-1));

        if(totsum%2) return false;
        int target=totsum/2;

        return f(nums, target,n-1,dp);
    }
};