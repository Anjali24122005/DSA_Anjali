class Solution {
public:
    int binary(vector<int> & nums, int start, int end, int target){
        if(start>end) return -1;

        int mid=start+(end-start)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            return binary(nums, mid+1, end, target);
        }else{
            return binary(nums, start, mid-1, target);
        }
    }
    int search(vector<int>& nums, int target) {
        return binary(nums, 0, nums.size()-1, target);
    }
};