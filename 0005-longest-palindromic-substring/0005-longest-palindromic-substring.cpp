class Solution {
public:
    void expandfromcenter(string& s, int left, int right, int& start, int& maxlen){
            while(left>=0 && right<=s.length() && s[left]==s[right]){
                int len=right-left+1;
                if (len > maxlen) {
                maxlen = len;
                start = left;
            }
            left--;
            right++; 
            }
    }
    string longestPalindrome(string s) {
        // int n = s.size();
        // string longest = "";
        // for(int i = 0; i < n; i++) {
        //     for(int j = i; j < n; j++) {
        //         string sub = s.substr(i, j - i + 1);
        //         string rev = sub;
        //         reverse(rev.begin(), rev.end());
        //         if(sub == rev && sub.size() > longest.size()) {
        //             longest = sub;
        //         }
        //     }
        // }
        // return longest;
        int n = s.length();
        if (n == 0) return "";

        int start = 0, maxLen = 1;

        for (int i = 0; i < n; i++) {
            expandfromcenter(s, i, i, start, maxLen);
            expandfromcenter(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }
};