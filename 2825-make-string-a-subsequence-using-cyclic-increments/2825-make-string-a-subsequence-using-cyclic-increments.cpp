class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int l1=0, l2=0;
        while(l1<str1.size() && l2<str2.size()){
            if(str2[l2]==str1[l1]){
                l1++;
                l2++;
            }else{
                char cn;
                if(str1[l1]=='z'){
                    cn='a';
                }else {
                    cn=str1[l1]+1;
                }

                if(str2[l2]==cn){
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