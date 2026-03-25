class Solution {
public:
    bool isvowel(char c){
        return(c=='a' || c=='e' ||c=='i' || c=='o' || c=='u');
    }


    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        int n2=queries.size();
        vector<int>ps(n);
        for(int i=0;i<n;i++){
            string w=words[i];
            if(isvowel(w[0]) && isvowel(w[w.size()-1])){
                ps[i]=1;
            }
        }
        for(int i=1;i<n;i++){
            ps[i]+=ps[i-1];
        }

        vector<int> ans;
        for(auto q:queries){
            int l=q[0], r=q[1];
            if(l==0) ans.push_back(ps[r]);
            else ans.push_back(ps[r]-ps[l-1]);
        }
        return ans;
    }
};

//ps=[1,0,1,1,1]=[1,1,2,3,4]

