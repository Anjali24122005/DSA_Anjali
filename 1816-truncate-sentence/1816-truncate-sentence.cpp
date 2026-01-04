class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string ans="";
        for(char ch:s){
            if(ch==' ') count++;
            if(count==k) break;
            ans+=ch;
        }
        return ans;
        
    }
};