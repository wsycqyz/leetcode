/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int used1[9][9]={0}, used2[9][9]={0}, used3[9][9]={0};
        int i,j,k;
        int num;
        for (i=0;i<9;i++) {
            for (j=0;j<9;j++) {
                if (board[i][j]!='.') {
                    num=board[i][j]-'0'-1;
                    k=i/3*3+j/3;
                    if (used1[i][num]||used2[j][num]||used3[k][num])
                        return false;
                    used1[i][num]=used2[j][num]=used3[k][num]=1;
                }
            }
        }
        return true;
    }
};
// @lc code=end

