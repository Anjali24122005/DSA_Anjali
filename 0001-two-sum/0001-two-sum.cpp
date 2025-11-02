class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // /*vector<int> ans;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return ans;*/
        // unordered_map<int,int> numMap;
        // for(int i=0;i<nums.size();i++){
        //     int complement = target-nums[i];
        //     if(numMap.find(complement)!=numMap.end()){
        //         return {numMap[complement],i};
        //     }
        //     numMap[nums[i]]=i;
        // }
        // return {};
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};