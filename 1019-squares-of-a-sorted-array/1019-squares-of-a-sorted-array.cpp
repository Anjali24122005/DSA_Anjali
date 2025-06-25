class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right=nums.size()-1;
    
        vector<int> result(nums.size());
        int index=nums.size()-1;
        while(left<=right){
            int leftsqr=nums[left]*nums[left];
            int rightsqr=nums[right]*nums[right];

            if(leftsqr>rightsqr){
                result[index]=leftsqr;
                left++;
            }else{
                result[index]=rightsqr;
                right--;
            }
            index--;
        }
        return result;;
    }
};