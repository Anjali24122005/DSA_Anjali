class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string st="";

        for(char ch  : s ){
            if(ch != ' '){
                word += ch;
            }else{
                if(word!=""){
                    int left=0, right=word.size()-1;
                    while(left<right){
                        swap(word[left], word[right]);
                        left++;
                        right--;
                    }
                    st+=word+" ";
                    word="";
                }
            }
        }
        if(word!=""){
            int left=0, right=word.size()-1;
            while(left<right){
                swap(word[left], word[right]);
                left++;
                right--;
            }
            st+=word;
        }
    
        return st;
    }
};