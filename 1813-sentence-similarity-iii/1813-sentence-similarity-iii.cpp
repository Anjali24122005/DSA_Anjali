class Solution {
public:
    vector<string>splitword(string s){
        vector<string>ans;
        string word="";

        for(char ch:s){
            if(ch==' '){
                if(word!=""){
                    ans.push_back(word);
                    word="";
                }
            }else{
                word+=ch;
                
            }
        }
        if(word!=""){
            ans.push_back(word);
        }
        return ans;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string>s1=splitword(sentence1);
        vector<string>s2=splitword(sentence2);

        int i=0, j=0;
        int n1=s1.size();
        int n2=s2.size();

        while(i<n1 && i<n2 && s1[i]==s2[i]){
            i++;
        }
        while(j<n1-i && j<n2-i && s1[n1-1-j]==s2[n2-1-j]){
            j++;
        }
        return i+j>=min(n1,n2);
    }
};