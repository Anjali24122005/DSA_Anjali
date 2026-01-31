// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int, int> nge;
//         stack<int>st;

//         for(int num:nums2){
//             while(!st.empty() && num>st.top()){
//                 nge[st.top()]=num;
//                 st.pop();
//             }
//             st.push(num);
//         }

//         while(!st.empty()){
//             nge[st.top()]=-1;
//             st.top();
//         }

//         vector<int> ans;
//         for(int num:nums1){
//             ans.push_back(nge[num]);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;
        stack<int> st;

        for(int num : nums2) {
            while(!st.empty() && num > st.top()) {
                nge[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Stack mein jo bache, unka next greater nahi mila
        while(!st.empty()) {
            nge[st.top()] = -1;
            st.pop(); // Yeh line important hai!
        }

        vector<int> ans;
        for(int num : nums1) {
            ans.push_back(nge[num]);
        }
        return ans;
    }
};