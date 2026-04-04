class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>=target){
                mini=min(mini, right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return (mini==INT_MAX)? 0:mini;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum>=target){
        //             mini=min(mini,j-i+1);
        //             break;
        //         }
        //     }
        // }
        //  return (mini==INT_MAX)? 0:mini;
    }
};
