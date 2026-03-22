class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){ // 3<5
            if (s[left] != s[right]) break;
            char ch=s[left]; //a->b->c
            while(left<=right && s[left]==ch) left++; /*0<=8 && a==a left=1,,,, 1<=8 && a==a left=2,,,, 2<=8 && b!=a ---
                                                       2<=7 && b==b left=3,,,, 3<=7 && c!=b---
                                                       3<=5 && c==c left=4,,,,4<=5 && c==c left=5 5<=5 && a!=c---*/                       
            while(left<=right && s[right]==ch) right--; /*2<=8 && a==a right=7,,,, 2<=7 && b!=a 
                                                         3<=7 && b==b right=6,,,, 3<=6 && b==b right=5 3<=5 && a!=b---
                                                         5<=5 &&a==c-----*/
        }
        return right-left+1;
    }
};

