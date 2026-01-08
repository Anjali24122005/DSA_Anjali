// class Solution {
// public:
//     int helper(vector<int>& nums1, vector<int>& nums2, int i, int j){
//         if(i == nums1.size() || j == nums2.size())
//             return INT_MIN;

//         int take = nums1[i] * nums2[j];
//         int next = helper(nums1, nums2, i+1, j+1);
//         if(next > 0) take += next;

//         int skip1 = helper(nums1, nums2, i+1, j);
//         int skip2 = helper(nums1, nums2, i, j+1);

//         return max(take, max(skip1, skip2));
//     }

//     int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
//         return helper(nums1, nums2, 0, 0);
//     }
// };

class Solution {
public:
    int dp[505][505];

    int helper(vector<int>& nums1, vector<int>& nums2, int i, int j) {
        if (i == nums1.size() || j == nums2.size())
            return INT_MIN;

        if (dp[i][j] != -1)
            return dp[i][j];

        int take = nums1[i] * nums2[j];
        int next = helper(nums1, nums2, i+1, j+1);
        if (next > 0) take += next;

        int skip1 = helper(nums1, nums2, i+1, j);
        int skip2 = helper(nums1, nums2, i, j+1);

        return dp[i][j] = max(take, max(skip1, skip2));
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp, -1, sizeof(dp));
        return helper(nums1, nums2, 0, 0);
    }
};

