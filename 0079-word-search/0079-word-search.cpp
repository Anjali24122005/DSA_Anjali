class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int idx) {
        // Agar pura word match ho gaya, toh jeet gaye!
        if (idx == word.size()) return true;
        // Boundary ya mismatch ya already visited
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[idx])
            return false;
        
        char temp = board[i][j];
        board[i][j] = '#'; // Mark as visited (jaise WhatsApp pe blue tick 😂)
        
        // 4 directions mein check karo
        bool found = dfs(board, word, i+1, j, idx+1) ||
                     dfs(board, word, i-1, j, idx+1) ||
                     dfs(board, word, i, j+1, idx+1) ||
                     dfs(board, word, i, j-1, idx+1);
        
        board[i][j] = temp; // Wapas unvisit kar do (undo blue tick 😜)
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};