class Solution {
public:
    string largestOddNumber(string num) {
        string odd="";
        int n=num.size()-1;
        for(int i=n;i>=0;i--){
              if(num[i]%2!=0) return num.substr(0,i+1);
        }
        return odd;
    }
};