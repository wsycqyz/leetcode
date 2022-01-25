/*
 * @lc app=leetcode id=73 lang=c
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start


void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int a[matrixSize];
    int b[matrixColSize[0]];
    int i,j;

    memset(a,0,sizeof(int)*matrixSize);
    memset(b,0,sizeof(int)*matrixColSize[0]);

    for (i=0;i<matrixSize;i++) {
        for (j=0;j<matrixColSize[i];j++) {
            if (matrix[i][j]==0) {
                a[i]=1;
                b[j]=1;
            }
        }
    }

    for (i=0;i<matrixSize;i++) {
        for (j=0;j<matrixColSize[i];j++) {
            if (a[i]||b[j]) {
                matrix[i][j]=0;
            }
        }
    }
}
// @lc code=end

