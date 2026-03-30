class Solution {
public:
    char kthCharacter(int k) {
        // Base case
        if (k == 1) return 'a';

        // Find smallest power of 2 >= k
        int len = 1;
        while (len < k) {
            len *= 2;
        }

        // If k is in left half
        if (k <= len / 2) {
            return kthCharacter(k);
        } 
        // If k is in right half
        else {
            char ch = kthCharacter(k - len / 2);
            return ch + 1;
        }
    }
};