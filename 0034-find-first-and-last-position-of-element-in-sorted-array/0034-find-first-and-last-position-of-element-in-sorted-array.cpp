class Solution {
public:
    int first(vector<int>& nums, int target){
        int index=-1;
        int start=0, end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                index=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return index;
    }

     int second(vector<int>& nums, int target){
        int index=-1;
        int start=0, end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                index=mid;
                start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstword = first(nums, target);
        int lastword = second(nums, target);
        return {firstword, lastword};
    }
};