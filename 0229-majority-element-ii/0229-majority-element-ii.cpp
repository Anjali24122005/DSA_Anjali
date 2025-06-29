class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // unordered_map<int, int> freq;
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     freq[nums[i]]++;
        // }
        // for(auto it:freq){
        //     if(it.second>n/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;

        int cnt1=0, cnt2=0;
        int el1=INT_MIN, el2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(el1==nums[i]){
                cnt1++;
            }else if(el2==nums[i]){
                cnt2++;
            }else if(cnt1==0){
                el1=nums[i];
                cnt1=1;
            }else if(cnt2==0){
                el2=nums[i];
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
        }
        vector<int> ans;
        if(cnt1>n/3) ans.push_back(el1);
        if(cnt2>n/3) ans.push_back(el2);
        return ans;
    }
};