class Solution {
public:
    void sortColors(vector<int>& nums) {
        //  int zero = 0, one = 0, two = 0;

        // // Count how many 0s, 1s, and 2s
        // for (int num : nums) {
        //     if (num == 0) zero++;
        //     else if (num == 1) one++;
        //     else two++;
        // }

        // // Overwrite the array with counted values
        // int i = 0;
        // while (zero--) nums[i++] = 0;
        // while (one--) nums[i++] = 1;
        // while (two--) nums[i++] = 2;
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            } else if(nums[mid]==1){
                mid++;
            } else{
                swap(nums[mid],nums[high]);
                high--;
            }
               
        }
    }
};