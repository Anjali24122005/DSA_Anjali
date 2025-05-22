class Solution {
public:
    int missingNumber(vector<int>& nums) {
       /* int n=nums.size();
        int sum=n*(n+1)/2;
        int actualsum=0;
        for(int num:nums){
            actualsum+=num;
        }
        return sum-actualsum;*/
        int xorall=0;
        int xornums=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            xorall^=i;
        }
        for(int num:nums){
            xornums^=num;
        }
        return xorall^xornums;
    }
};