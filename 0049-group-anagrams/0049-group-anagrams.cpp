class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>st;
        unordered_map<string,vector<string>>ans;

        for(string s:strs){
            string key=s;

            sort(key.begin(),key.end());
            ans[key].push_back(s);

        }
        for(auto it:ans){
            st.push_back(it.second);
        }

        return st;
    }
};