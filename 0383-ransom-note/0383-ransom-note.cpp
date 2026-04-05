class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) {
            return false;
        }
        unordered_map<char, int> r;
        unordered_map<char, int> m;

        // count characters in ransomNote
        for(int i = 0; i < ransomNote.size(); i++){
            r[ransomNote[i]]++;
        }

        // count characters in magazine
        for(int i = 0; i < magazine.size(); i++){
            m[magazine[i]]++;
        }

        // for(auto it:ransomNote){
        //      if(m[it.first] < it.second){
        //       return false;
        //     }
        // }

         for(auto it : r){
            if(m[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
};