class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string temp, res;
        int n = path.size();

        for(int i = 0; i < n; ++i) {
            if(path[i] == '/') continue; // Bhai, ek hi slash kaam aayega!
            temp = "";
            while(i < n && path[i] != '/') {
                temp += path[i];
                i++;
            }
            if(temp == ".") continue; // Yahin pe chill maar!
            else if(temp == "..") {
                if(!stack.empty()) stack.pop_back(); // Ek level upar!
            }
            else if(temp != "") {
                stack.push_back(temp); // Naya folder mil gaya, stack mein daal!
            }
        }
        for(auto &dir : stack) {
            res += "/" + dir;
        }
        return res.empty() ? "/" : res;
    }
};