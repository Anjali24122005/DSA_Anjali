class Solution {
public:
    int f(int ind , vector<int>&nums, vector<int>&memo){
        int n=nums.size();

        if(ind==0) return nums[ind];
        if(ind<0) return 0;

        if(memo[ind]!=-1) return memo[ind];
        

        int pick=nums[ind]+f((ind-2), nums, memo);
        int notpick=0+f((ind-1), nums, memo);

        return memo[ind]=max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> memo(n,-1);
        return f(n-1, nums, memo);
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
    }
};