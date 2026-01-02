class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int count=0;
        // int n=nums.size();
        // unordered_map<int, int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]]>n/2) return nums[i];
        // }
        // return -1;


        //Boyer-Moore Voting Algorithm
        int element;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                element=nums[i];
            }else if(nums[i]==element){
                count++;
            }else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element) count1++;
        }
        if(count1>n/2) {
            return element;
        }
        return -1;
    }
};