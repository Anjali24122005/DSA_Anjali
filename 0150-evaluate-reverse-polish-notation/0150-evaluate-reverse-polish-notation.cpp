class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& tok : tokens) {
            // Operator mila toh last do numbers nikaal, operation kar, result wapas daal
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (tok == "+") st.push(a + b);
                else if (tok == "-") st.push(a - b);
                else if (tok == "*") st.push(a * b);
                else st.push(a / b); // division hamesha truncate towards zero
            } else {
                // Number mila toh stack mein daal de seedha
                st.push(stoi(tok));
            }
        }
        return st.top();
    }
};