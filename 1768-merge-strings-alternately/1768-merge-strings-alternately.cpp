class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n1=word1.size(), n2=word2.size();
        int left1=0;
        int left2=0;
        while(left1<n1 && left2<n2){
            ans.push_back(word1[left1]);
            ans.push_back(word2[left2]);
            left1++;
            left2++;
        }
        while(left1<n1){
            ans.push_back(word1[left1]);
            left1++;
        }
        while(left2<n2){
            ans.push_back(word2[left2]);
            left2++;
        }
        return ans;
    }
};