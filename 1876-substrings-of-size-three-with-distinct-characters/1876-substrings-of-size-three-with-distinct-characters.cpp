// class Solution {
// public:
//     int countGoodSubstrings(string s) {
//         if(s.size()<3) return 0;
//         int count = 0;
//         for(int i = 0; i <= s.length() - 3; i++) {
//             if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int count = 0;
        for(int i = 0; i <= s.length() - 3; i++) {
            unordered_set<char> st;
            st.insert(s[i]);
            st.insert(s[i+1]);
            st.insert(s[i+2]);
            if(st.size() == 3) count++;
        }
        return count;
    }
};