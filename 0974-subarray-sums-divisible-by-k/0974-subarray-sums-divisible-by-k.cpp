// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         // int cnt=0;
//         // for(int i=0;i<nums.size();i++){
//         //     int sum=0;
//         //     for(int j=i;j<nums.size();j++){
//         //         sum+=nums[j];
//         //         if(sum%k==0){
//         //             cnt++;
//         //         }
//         //     }
//         // }
//         // return cnt;

//         unordered_map<int,int>mp;
//         mp[0]=1;
//         int sum=0, ans=0;
//         for(auto num: nums){
//             sum+=num;
//             int mod=((sum%k))
//         }
//     }
// };

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1; // starting point, prefix sum zero se bhi ho sakta hai divisible
        int sum = 0, ans = 0;
        for(auto num : nums) {
            sum += num;
            int mod = ((sum % k) + k) % k; // negative remainder ko positive bana diya
            ans += mp[mod];
            mp[mod]++;
        }
        return ans;
    }
};