class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";
        int plen=part.size();

        for(char ch:s){
            ans+=ch;

            if(ans.size()>=plen && ans.substr(ans.size()-plen, plen)==part){
                ans.erase(ans.size()-plen, plen);
            }
        }
        return ans;
    }
};