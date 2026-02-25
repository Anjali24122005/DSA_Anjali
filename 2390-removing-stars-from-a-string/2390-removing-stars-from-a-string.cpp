class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        for(char ch : s) {
            if(ch == '*') {
                if(!ans.empty()) ans.pop_back(); // Bhai, star mila toh pichla banda nikal!
            } else {
                ans.push_back(ch); // Normal character, toh queue mein daal do!
            }
        }
        return ans;
    }
};