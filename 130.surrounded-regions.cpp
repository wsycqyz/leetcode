/*
 * @lc app=leetcode id=130 lang=cpp
 *
 * [130] Surrounded Regions
 */

// @lc code=start
class Solution {
public:
    void helper(vector<vector<char>>& board, int i, int j) {
        if (i<0 || j<0 || i==board.size() || j==board[0].size() || board[i][j]!='O') {
            return;
        }
        board[i][j]='T';
        helper(board, i+1, j);
        helper(board, i, j+1);
        helper(board, i-1, j);
        helper(board, i, j-1);
    }
    void solve(vector<vector<char>>& board) {
        int i,j;
        int m=board.size(), n=board[0].size();
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if ((i==0 || i==m-1 || j==0 || j==n-1) && board[i][j]=='O') {
                    helper(board, i, j);
                }
            }
        }
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (board[i][j]=='O') board[i][j]='X';
            }
        }
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (board[i][j]=='T') board[i][j]='O';
            }
        }
    }
};
// @lc code=end

