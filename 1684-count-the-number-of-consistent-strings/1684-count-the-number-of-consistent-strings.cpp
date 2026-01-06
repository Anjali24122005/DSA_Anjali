class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        int cnt=0;
        for(char ch:allowed){
            st.insert(ch);
        }
        for(string word:words){
            bool flag=true;
            for(char ch:word){
                if(st.find(ch)==st.end()){
                    flag=false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};