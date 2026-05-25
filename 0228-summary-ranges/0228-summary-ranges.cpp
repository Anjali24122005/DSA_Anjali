class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        
        if(n == 0) return result;

        int start = nums[0];  // start of range
        
        for(int i = 1; i <= n; i++) {
            // check if range breaks OR end reached
            if(i == n || nums[i] != nums[i-1] + 1) {
                
                if(start == nums[i-1]) {
                    // single number
                    result.push_back(to_string(start));
                } else {
                    // range
                    result.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                }
                
                // start new range
                if(i < n) start = nums[i];
            }
        }
        
        return result;
    }
};