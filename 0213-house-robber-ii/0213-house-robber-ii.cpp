class Solution {
public:
    int f(int ind, int start, vector<int>&nums, vector<int>&memo){
        int n=nums.size();
         if(ind<start) return 0;
         if(ind==start) return nums[ind];

         if(memo[ind]!=-1) return memo[ind];

         int pick=nums[ind]+f(ind-2, start, nums,memo);
         int notpick=f(ind-1, start, nums,memo);

         return memo[ind]=max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>memo1(n,-1);
        vector<int>memo2(n,-1);
        if(n==1) return nums[0];

        int case1=f(n-1,1,nums, memo1);
        int case2=f(n-2,0, nums,memo2);
        return max(case1, case2);
        
    }
};