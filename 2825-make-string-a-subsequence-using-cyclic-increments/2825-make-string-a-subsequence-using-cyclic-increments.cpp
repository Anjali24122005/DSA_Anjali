class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if(str1.size()<str2.size()) return false;
        int l1=0, l2=0;
        while(l1<str1.size() && l2<str2.size()){
            if(str2[l2]==str1[l1]){
                l1++;
                l2++;
            }else{
                char cyclicnext;
                if(str1[l1]=='z'){
                    cyclicnext='a';
                }else {
                    cyclicnext=str1[l1]+1;
                }

                if(str2[l2]==cyclicnext){
                    l1++;
                    l2++;
                }else{
                    l1++;
                }
            }
        }
        return l2==str2.size();
    }
};