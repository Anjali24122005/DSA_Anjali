class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        
        // Step 1: Put friends in a set for quick lookup
        unordered_set<int> st(friends.begin(), friends.end());
        
        // Step 2: Traverse order
        for (int i = 0; i < order.size(); i++) {
            if (st.count(order[i])) {
                result.push_back(order[i]);
            }
        }
        
        return result;
    }
};