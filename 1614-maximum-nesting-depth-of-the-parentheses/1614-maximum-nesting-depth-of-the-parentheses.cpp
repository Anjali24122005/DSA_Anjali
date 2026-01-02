class Solution {
public:
    int maxDepth(string s) {
        int currdepth=0;
        int maxdepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                currdepth++;
                maxdepth=max(maxdepth,currdepth);
            }else if(s[i]==')'){
                currdepth--;
            }
        }
        return maxdepth;
    }
};