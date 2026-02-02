class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
                else{
                    v.push_back(i);
                }
            }
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }

        sort(v.begin(),v.end());
        string ans="";
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(idx<v.size() && v[idx]==i){
                idx++;
                continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};