/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int matrixSize = matrix.size();
        int matrixColSize = matrix[0].size();
        int a[matrixSize];
        int b[matrixColSize];
        int i,j;

        memset(a,0,sizeof(int)*matrixSize);
        memset(b,0,sizeof(int)*matrixColSize);

        for (i=0;i<matrixSize;i++) {
            for (j=0;j<matrixColSize;j++) {
                if (matrix[i][j]==0) {
                    a[i]=1;
                    b[j]=1;
                }
            }
        }

        for (i=0;i<matrixSize;i++) {
            for (j=0;j<matrixColSize;j++) {
                if (a[i]||b[j]) {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
// @lc code=end

