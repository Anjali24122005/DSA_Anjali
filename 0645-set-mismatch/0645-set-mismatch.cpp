class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int dup=-1;
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=nums[i];if(nums[i]==nums[i+1]){
                dup=nums[i];
            }
        }
        sum+=nums[n-1];

        long long total=(long long)n* (n+1)/2;
        int missing=total-(sum-dup);

        return {dup,missing};
    }
};