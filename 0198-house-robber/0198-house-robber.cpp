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

        // int n=nums.size();
        // vector<int>dp(n,0);

        // if(n<=0) return 0;

        // dp[0]=nums[0];
        
        // for(int i=1;i<n;i++){
        //     if(i<2) dp[i]=max(dp[i-1], nums[i]);
        //     else dp[i]=max(dp[i-1], nums[i]+dp[i-2]);
        // }
        // return dp[n-1];

        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            int nontake=0+prev;
            int curr=max(take,nontake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
// nums=[2,1,3,4]
// prev=2, prev2=0;
// i=1->take=1
// i==1 if not execute
// nontake=0+2=2
// curr=max(2, 1)=2;
// prev=2, prev2=2;

// i=2-> take=3
// 2>1 take=3+2=5
// nontake=0+2=2
// curr=max(2,5)=5
// prev2=2, prev=5;

// i=3->take=4;
// 3>1 take=4+2=6
// nontake=0+5=5
// curr=max(5,6)=6
// prev2=5, prev=6;
// return prev=6

// nums=[1,2,3,1]
// prev=1, prev2=0;
// i=1-> take=2;
// i==1 if not execute
// nontake=0+1=1
// curr=max(2,1)=2;
// prev2=1, prev=2

// i=2-> take=3
// 2>1 take=3+1=4
// nontake=0+2=2;
// curr=max(4,2)=4;
// prev2=2, prev=4

// i=3-> take=1
// 3>1 take=1+2=3
// nontake=0+4=4
// curr=max(3,4)=4
// prev2=4, prev=4;

// return prev=4



// array=[1,2,3,4]
// dp=[1,2,4,6]
// dp[2]=max(2,4) dp[2]=4
// dp[3]=max(4,6)

// nums=[1,2,3,1]
// dp=[1,2,4,4]
// dp[1]=max(1,2)=2
// dp[2]=max(2,4)
// dp[3]=max(4, 3)=4

