class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // vector<int>prefix(n,1);
        // vector<int>suffix(n,1);
        // for(int i=1;i<nums.size();i++){
        //     prefix[i]=prefix[i-1]*nums[i-1];
        // }
        // for(int i=nums.size()-2;i>=0;i--){
        //     suffix[i]=suffix[i+1]*nums[i+1];
        // }
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=prefix[i]*suffix[i];
        // }
        // return nums;

        int prefix=1;
        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=suffix;
            suffix*=nums[i];
        }
        return ans;
    }
};