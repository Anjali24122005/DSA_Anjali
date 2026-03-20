class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int left=0, right=n-1;
        while(left<right){
            if(s[left]!=s[right]){
                if(s[left]<s[right]){
                    s[right]=s[left];
                    left++;
                    right--;
                }else{
                    s[left]=s[right];
                    left++;
                    right--;
                }
                
                
            }else{
                left++;
                right--;
            }
        }
        return s;
    }
};