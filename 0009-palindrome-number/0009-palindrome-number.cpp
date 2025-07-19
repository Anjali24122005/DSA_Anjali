class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int dup=x;
        int rev=0;
        while(x!=0){
            int last=x%10;
             if(rev>INT_MAX/10 || (rev==INT_MAX/10 && last>7)) return false;
            rev=rev*10+last;
            x=x/10;
        }
        return (rev==dup);
    }
};