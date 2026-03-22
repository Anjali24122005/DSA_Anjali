class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int left=0, right=0;// a a b b c c c
        while(right<n){
            char curr=chars[right];
            int count=0;
            while(right<n && chars[right]==curr){
                count++;
                right++;
            }
            chars[left++]=curr;
            if(count>1){
                for(char c:to_string(count)){
                    chars[left++]=c;
                }
            }
        }
        return left;
    }
};