class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops=0;
        for(int i=0;i<nums.size();i++){
            int rem=nums[i]%3;
            if(rem==1 || rem ==2) ops+=1;
        }
        return ops;
    }
};