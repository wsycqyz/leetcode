/*
 * @lc app=leetcode id=48 lang=c
 *
 * [48] Rotate Image
 */

// @lc code=start


void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int i,j,tmp;
    printf("Step 1\n");
    for (i=0;i<matrixSize/2;i++) {
        for (j=0;j<matrixSize;j++) {
            tmp=matrix[i][j];
            matrix[i][j]=matrix[matrixSize-1-i][j];
            matrix[matrixSize-1-i][j]=tmp;
        }
    }
    printf("Step 2\n");
    for (i=0;i<matrixSize;i++) {
        matrixColSize[i]=matrixSize;
        for (j=i+1;j<matrixSize;j++) {
            tmp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=tmp;
        }
    }
}
// @lc code=end

