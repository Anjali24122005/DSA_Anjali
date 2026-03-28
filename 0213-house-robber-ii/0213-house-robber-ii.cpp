class Solution {
public:
    // int f(int ind, int start, vector<int>&nums, vector<int>&memo){
    //      if(ind<start) return 0;
    //      if(ind==start) return nums[ind];

    //      if(memo[ind]!=-1) return memo[ind];

    //      int pick=nums[ind]+f(ind-2, start, nums,memo);
    //      int notpick=f(ind-1, start, nums,memo);

    //      return memo[ind]=max(pick, notpick);
    // }

    int solve(vector<int>&nums, int start, int end){
        
        int prev=nums[start];
        int prev2=0;

        for(int i=start+1; i<=end;i++){
            int take=nums[i];
            if(i>start+1) take+=prev2;
            int nontake=0+prev;
            int curr=max(take,nontake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>memo1(n,-1);
        // vector<int>memo2(n,-1);
        // if(n==1) return nums[0];

        // int case1=f(n-1,1,nums, memo1);
        // int case2=f(n-2,0, nums,memo2);
        // return max(case1, case2);

        // int n=nums.size();
        // if(n==0) return 0;
        // if(n==1) return nums[0];
        // if(n==2) return max(nums[0], nums[1]);
        // vector<int>dp1(n,0);
        // vector<int>dp2(n,0);
        
        // dp1[0]=nums[0];
        // dp1[1]=max(nums[0],nums[1]);
        

        // for(int i=2;i<n-1;i++){
        //     dp1[i]=max(dp1[i-1], nums[i]+dp1[i-2]);
        // }

        // dp2[1]=nums[1];
        // dp2[2]=max(nums[1], nums[2]);
        // for(int i=3;i<n;i++){
        //     dp2[i]=max(dp2[i-1], nums[i]+dp2[i-2]);
        // }

        // return max(dp1[n-2], dp2[n-1]);

        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        int case1=solve(nums, 0, n-2);
        int case2=solve(nums, 1, n-1);

        return max(case1, case2);
        
    }
};