class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0); // Bhai, har character ka count rakhne ke liye!

        // Pehle sabka count nikaal le
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        // Ab pehle unique character ko dhoondh le
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) return i; // Jo pehli baar aaya, wahi answer!
        }

        return -1; // Bhai, sab repeat ho rahe hain toh -1!
    }
};