class Solution {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int n, row, col;
    bool f(int cur, int i, int j, vector<vector<bool>>& vis, vector<vector<char> >& board, string& word) {
        if(cur == n) return true;

        bool ans = false;
        for(int k = 0; k < 4; k++) {
            int nX = i+dx[k];
            int nY = j+dy[k];
            if(nX >= 0 && nX < row && nY >= 0 && nY < col && !vis[nX][nY] && word[cur] == board[nX][nY]) {
                vis[nX][nY] = 1;
                ans |= f(cur+1, nX, nY, vis, board, word);
                vis[nX][nY] = false;
                if(ans) return true;
            }
        }
        return ans;
    }
public:
    bool exist(vector<vector<char> >& board, string word) {
        n = word.size();
        row = board.size();
        col = board[0].size();
        vector<vector<bool>> vis(row, vector<bool>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == word[0]) {
                    vis[i][j] = true;
                    if (f(1, i, j, vis, board, word)) {
                        return true;
                    }
                    vis[i][j] = false;
                }
            }
        }
        return false;
    }
};