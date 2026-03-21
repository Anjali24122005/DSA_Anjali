class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left=0, right=s.size();
        int n=s.size();
        vector<int>perm;
        for(char num:s){
            if(num=='I'){
                perm.push_back(left);
                left++;
            }else{
                perm.push_back(right);
                right--;
            }
        }
        perm.push_back(left);
        return perm;

    }
};



