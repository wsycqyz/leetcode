/*
 * @lc app=leetcode id=766 lang=cpp
 *
 * [766] Toeplitz Matrix
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (i+1<m&&j+1<n) {
                    if (matrix[i][j]!=matrix[i+1][j+1]) return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

