class Solution {
public:
    // int f(int ind , vector<int>&nums, vector<int>&memo){
    //     int n=nums.size();

    //     if(ind==0) return nums[ind];
    //     if(ind<0) return 0;

    //     if(memo[ind]!=-1) return memo[ind];
        

    //     int pick=nums[ind]+f((ind-2), nums, memo);
    //     int notpick=0+f((ind-1), nums, memo);

    //     return memo[ind]=max(pick, notpick);
    // }
    int rob(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> memo(n,-1);
        // return f(n-1, nums, memo);


        // int n=nums.size();
        // if(n == 0) return 0;
        // int prev=nums[0];
        // int prev2=0;
        // for(int i=1;i<n;i++){
        //     int take=nums[i];
        //     if(i>1) take+=prev2;
        //     int nontake=0+prev;
        //     int curi=max(take,nontake);
        //     prev2=prev;
        //     prev=curi;
        // }
        // return prev;
        int n=nums.size();
        vector<int>dp(n,0);

        if(n<=0) return 0;

        dp[0]=nums[0];
        
        for(int i=1;i<n;i++){
            if(i<2) dp[i]=max(dp[i-1], nums[i]);
            else dp[i]=max(dp[i-1], nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};

// array=[1,2,3,4]
// dp=[1,2,4,6]
// dp[2]=max(2,4) dp[2]=4
// dp[3]=max(4,6)