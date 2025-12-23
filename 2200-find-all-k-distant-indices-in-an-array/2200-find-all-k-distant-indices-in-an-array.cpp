class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        // vector<int> result;
        // for(int i=0;i<nums.size();i++){
        //    for(int j=0;j<nums.size();j++){
        //     if(abs(i-j)<=k && nums[j]==key){
        //         result.push_back(i);
        //         break;
        //     }
        //    }
        // }
        // return result;

        set<int> ans;
        int n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]==key){
                int left=max(0,j-k);
                int right=min(n-1,j+k);
                for(int i=left;i<=right;i++){
                    ans.insert(i);
                }
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};