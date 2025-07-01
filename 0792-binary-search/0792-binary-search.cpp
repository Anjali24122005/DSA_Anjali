class Solution {
public:
    // int binary(const vector<int> & nums, int start, int end, int target){
    //     if(nums.empty()) return -1;
    //     if(start>end) return -1;

    //     int mid=start+(end-start)/2;

    //     if(nums[mid]==target) return mid;
    //     else if(nums[mid]<target){
    //         return binary(nums, mid+1, end, target);
    //     }else{
    //         return binary(nums, start, mid-1, target);
    //     }
    // }
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};