class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, char> mapS, mapT;
        for(int i = 0; i < s.length(); i++) {
            char chS = s[i], chT = t[i];
            // Check mapping from s to t
            if(mapS.count(chS) && mapS[chS] != chT) return false;
            // Check mapping from t to s
            if(mapT.count(chT) && mapT[chT] != chS) return false;
            // Set mapping
            mapS[chS] = chT;
            mapT[chT] = chS;
        }
        return true;
    }
};