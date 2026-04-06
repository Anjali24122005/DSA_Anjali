class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string word="";
        for(char ch : s){
           if(ch != ' '){
             word += ch;
            } else {
              words.push_back(word);
              word = "";
            }
        }
        words.push_back(word); // last word

        if(words.size() != pattern.size()) return false;

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;

        for(int i=0;i<pattern.size();i++){
             char ch = pattern[i];
            string w = words[i];
            if(mp.find(ch) != mp.end()){
                if(mp[ch] != w) return false;
            } else {
                if(rev.find(w) != rev.end()) return false;
                mp[ch] = w;
                rev[w] = ch;
            }
        }
        return true;
    }
};