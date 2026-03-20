class Solution {
public:
    string largestMerge(string word1, string word2) {
        string merge="";
        while(!word1.empty() && !word2.empty()){
            if(word1>word2){
                merge.push_back(word1[0]);
                word1.erase(0,1);
            }else{
                merge.push_back(word2[0]);
                word2.erase(0,1);
            }
        }
        return merge+word1+word2;
    }
};