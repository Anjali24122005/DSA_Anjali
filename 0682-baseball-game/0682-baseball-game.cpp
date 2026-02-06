class Solution {
public:
    int calPoints(vector<string>& operations) {
        // stack<int> st;
        // int x=0;
        // for(int i=0;i<operations.size();i++){
        //     if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
        //         st.push(stoi(operations[i]));
        //     }else if(operations[i]=="+"){
        //         int top1=st.top();
        //         st.pop();
        //         int top2=st.top();
        //         int sum=top1+top2;
        //         st.push(top1);
        //         st.push(sum);
        //     }else if(operations[i]=="D"){
        //         int dbl=2*st.top();
        //         st.push(dbl);
        //     }else if(operations[i]=="C"){
        //         st.pop();
        //     }
        // }
        // while(!st.empty()){
        //     x+=st.top();
        //     st.pop();
        // }
        // return x;

        vector<int>v;
        int x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C"){
                v.push_back(stoi(operations[i]));
            }else if(operations[i]=="+"){
                int last=v[v.size()-1];
                int slast=v[v.size()-2];
                int sum=last+slast;
                v.push_back(sum);
            }else if(operations[i]=="D"){
                int dbl=2*v[v.size()-1];
                v.push_back(dbl);
            }else if(operations[i]=="C"){
                v.pop_back();
            }
        }
        for(int i=0;i<v.size();i++){
            x+=v[i];
        }
        return x;
    }
};