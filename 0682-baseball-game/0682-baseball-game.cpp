class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
                st.push(stoi(operations[i]));
            }else if(operations[i]=="+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                int sum=top1+top2;
                st.push(top1);
                st.push(sum);
            }else if(operations[i]=="D"){
                int dbl=2*st.top();
                st.push(dbl);
            }else if(operations[i]=="C"){
                st.pop();
            }
        }
        while(!st.empty()){
            x+=st.top();
            st.pop();
        }
        return x;
    }
};