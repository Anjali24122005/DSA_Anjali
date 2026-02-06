class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        int n=temp.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            while(!st.empty() && temp[i]>temp[st.top()]){
                int previdx=st.top();
            st.pop();
            ans[previdx]=i-previdx;
            }
            st.push(i);
        }
        return ans;
    }

};