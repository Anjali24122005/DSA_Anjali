class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=word.find(ch);
        if(idx==-1) return word;
        int left=0, right=idx;
        while(left<=right){
            swap(word[left], word[right]);
            left++;
            right--;
        }
        return word;
    }
};