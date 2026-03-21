class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left=0, right=s.size();
        int n=s.size();
        vector<int>perm;
        vector<int>arr(n+1);
        for(int i=0;i<=n;i++){
            arr[i]=i;
        }

        for(char num:s){
            if(num=='I'){
                perm.push_back(arr[left]);
                left++;
            }else{
                perm.push_back(arr[right]);
                right--;
            }
        }
        perm.push_back(arr[left]);
        return perm;

    }
};



