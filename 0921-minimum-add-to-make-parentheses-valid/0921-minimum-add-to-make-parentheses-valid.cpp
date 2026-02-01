class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        // int cnt=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(s[i]);
        //     }else{
        //         if(st.empty()) cnt++;
        //         else{ 
        //             st.pop();
        //         }
        //     }
        // }
        // while(!st.empty()){
        //     cnt++;
        //     st.pop();
        // }
        // return cnt;
        int open=0;
        int add=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else{
                if(open>0){
                    open--;
                }else{
                    add++;
                }
            }
        }
        return add+open;
    }
};