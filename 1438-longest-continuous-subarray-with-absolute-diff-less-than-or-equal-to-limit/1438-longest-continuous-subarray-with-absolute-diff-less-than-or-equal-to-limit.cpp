class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxq, minq;
        int left = 0, ans = 0;
        for (int right = 0; right < nums.size(); ++right) {
            // Maintain max queue (decreasing)
            while (!maxq.empty() && nums[right] > maxq.back())
                maxq.pop_back();
            maxq.push_back(nums[right]);
            // Maintain min queue (increasing)
            while (!minq.empty() && nums[right] < minq.back())
                minq.pop_back();
            minq.push_back(nums[right]);

            // Shrink window if diff > limit
            while (maxq.front() - minq.front() > limit) {
                if (maxq.front() == nums[left]) maxq.pop_front();
                if (minq.front() == nums[left]) minq.pop_front();
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};