/*
 * @lc app=leetcode id=419 lang=cpp
 *
 * [419] Battleships in a Board
 */

// @lc code=start
class Solution {
public:
    void helper1(vector<vector<char>>& m,int a,int b) {
        m[a][b]='.';

        if (a+1<m.size()&&m[a+1][b]=='X') {
            helper1(m, a+1, b);
        }
    }
    void helper2(vector<vector<char>>& m,int a,int b) {
        m[a][b]='.';

        if (b+1<m[0].size()&&m[a][b+1]=='X') {
            helper2(m, a, b+1);
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int re=0;

        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (board[i][j]=='X') {
                    if (i<m-1&&j<n-1) {
                        if (board[i+1][j]=='.'&&board[i][j+1]=='.') {
                            board[i][j]='.';
                            re++;
                            continue;
                        } else if (board[i+1][j]=='X') {
                            helper1(board,i,j);
                            re++;
                            continue;
                        } else if (board[i][j+1]=='X') {
                            helper2(board,i,j);
                            re++;
                            continue;
                        }
                    }
                    if (i==m-1&&j==n-1) {
                        re++;
                        continue;
                    }
                    if (i==m-1) {
                        re++;
                        helper2(board, i, j);
                    }
                    if (j==n-1) {
                        re++;
                        helper1(board, i, j);
                    }
                }
            }
        }

        return re;
    }
};
// @lc code=end

