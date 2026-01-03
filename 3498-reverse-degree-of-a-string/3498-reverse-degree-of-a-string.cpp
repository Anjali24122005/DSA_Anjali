class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            int revIdx = 26 - (s[i] - 'a'); // 'a' = 26, 'z' = 1, waise hi sabka
            ans += revIdx * (i + 1); // 1-indexed position, bhoolna mat!
        }
        return ans;
    }
};