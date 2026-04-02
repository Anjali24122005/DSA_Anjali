class Solution {
public:
    // bool f(vector<int>& nums, int sum, int ind, vector<vector<int>>&dp){
    //     if(sum==0) return true;
    //     if(ind==0) return nums[0]==sum;
    //     if(dp[ind][sum]!=-1) return dp[ind][sum];

    //     bool nottake=f(nums, sum, ind-1,dp);
    //     bool take=false;
    //     if(nums[ind]<=sum) take=f(nums, sum-nums[ind], ind-1, dp);
    //     return dp[ind][sum]=take || nottake;
        
    // }
    bool canPartition(vector<int>& nums) {
        int totsum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++) totsum+=nums[i];
        
        if(totsum%2) return false;
        int target=totsum/2;
        vector<vector<bool>> dp(n, vector<bool>(target+1,0));

        //base case
        for(int i=0;i<n;i++) dp[i][0]=true;
        if(nums[0]<=target) dp[0][nums[0]]=true;

        for(int i=1;i<n;i++){
            for(int s=1;s<=target;s++){
                bool nottake=dp[i-1][s];
                bool take=false;
                if(nums[i]<=s){
                    take=dp[i-1][s-nums[i]];
                }
                dp[i][s]=take || nottake;
            }
        }

        return dp[n-1][target];
        // return f(nums, target,n-1,dp);
    }
};


// f(11,3)-> nottake- f(11,2)
//        -> take- f(6,2)->nottake- f(6,1)-> nottake- f(6, 0)
//                                        -> take- f(1, 0) 1==1 base case 
//                  take=if(11!<6) x take will give false 



        