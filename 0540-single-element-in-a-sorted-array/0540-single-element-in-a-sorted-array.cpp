class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // if(n==1) return nums[0];
        // if(nums[0]!=nums[1]) return nums[0];
        // for(int i=1;i<nums.size()-1;i++){
        //     if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
        //         return nums[i];
        //     }
        // }

        // if(nums[n-1]!=nums[n-2]) return nums[n-1];
        // return -1;    

        int n=nums.size();
        int left=0, right=n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    left=mid+2;
                }
                else{
                    right=mid;
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
        return nums[left];
    }
};
