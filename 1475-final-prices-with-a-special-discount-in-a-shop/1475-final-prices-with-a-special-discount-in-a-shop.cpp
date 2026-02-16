class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(prices);
        stack<int> st; // Stack mein index store karenge, bhai!

        for (int i = 0; i < n; ++i) {
            // Jab bhi stack ka top wala price current se bada ya barabar ho, usko discount mil jaayega!
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                ans[st.top()] = prices[st.top()] - prices[i];
                st.pop();
            }
            st.push(i); // Apna index stack mein daal do, bhai!
        }
        return ans;
    }
};