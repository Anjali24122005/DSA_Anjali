class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (auto& log : logs) {
            if (log == "../") {
                if (depth > 0) depth--; // Bhai, root pe ho toh aur upar nahi ja sakte!
            } else if (log == "./") {
                // Same folder mein chill maar, kuch nahi karna!
            } else {
                depth++; // Naya folder, depth badha de!
            }
        }
        return depth;
    }
};