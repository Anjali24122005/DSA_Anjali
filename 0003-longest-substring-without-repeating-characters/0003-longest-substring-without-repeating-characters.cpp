class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int count=0;
        int maxi=0;
        unordered_set<char>st;
        for(int right=0;right<n;right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};
// st={c,b}
// maxi=1->2->3
// abcb= a not in set-> right=1->right=2->right=3