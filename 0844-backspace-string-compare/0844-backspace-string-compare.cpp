class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s1.push(s[i]);
            }else if(s[i]=='#'){
                if(!s1.empty()) s1.pop();
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]>='a' && t[i]<='z'){
                s2.push(t[i]);
            }else if(t[i]=='#'){
                if(!s2.empty()) s2.pop();
            }
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return s1.empty() && s2.empty();
    }
};