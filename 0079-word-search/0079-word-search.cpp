class Solution {
    vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};
    bool dfs(int i, int j, string &s, string &word, int p, vector<vector<char>>& b, vector<vector<int>> &vis) {
        if(s == word) return true;

        for(int k=0; k<4; k++) {
            int x = i + dx[k], y = j + dy[k];
            if(x >= 0 && x < b.size() && y >= 0 && y < b[0].size() && !vis[x][y] && b[x][y] == word[p]) {
                s += b[x][y];
                vis[x][y] = 1;
                if(dfs(x, y, s, word, p + 1, b, vis)) return true;
                vis[x][y] = 0;
                s.pop_back();
            }
        }
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    vector<vector<int>> vis(board.size(), vector<int> (board[0].size()));
                    vis[i][j] = 1;
                    string s = word.substr(0, 1);
                    if(dfs(i, j, s, word, 1, board, vis)) return true;
                }
            }
        }
        return false;
    }
};