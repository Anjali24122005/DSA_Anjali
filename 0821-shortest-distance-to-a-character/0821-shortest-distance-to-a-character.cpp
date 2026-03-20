class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        int prev=-1e9;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(s[i]==c) prev=i;
            ans[i]=i-prev;
        }
        prev=1e9;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c) prev=i;
            ans[i]=min(ans[i], prev-i);
        }
        return ans;
    }
};