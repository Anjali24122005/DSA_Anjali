class Solution {
public:
    bool isPalindrome(string s) {
        // string clean="";
        // for(char c:s){
        //     if(isalnum(c)) clean+=tolower(c);
        // }
        // int i=0, j=clean.size()-1;
        // while(i<j){
        //     if(clean[i++]!=clean[j--]) return false;
        // }
        // return true;

        int i=0,j=s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i])!=tolower(s[j])) return false;
            i++, j--;
        }
        return true;
    }
};