class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int idx=0;

        for(int i=1;i<=n && idx<target.size();i++){
            v.push_back("Push");
            if(i==target[idx]){
                idx++;
            }else{
                v.push_back("Pop");
            }
        }
        return v;
    }
};