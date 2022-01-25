/*
 * @lc app=leetcode id=54 lang=c
 *
 * [54] Spiral Matrix
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int s=0,i=0,j=0,k=0;
    int *re;
    *returnSize=0;

    if (matrixSize==1) {
        *returnSize=matrixColSize[0];
        return *matrix;
    }

    re=malloc(sizeof(int)*matrixSize*matrixColSize[0]);

    while(true) {
        if (matrix[i][j]!=999) {
            printf("push %d\n",matrix[i][j]);
            re[*returnSize]=matrix[i][j];
            matrix[i][j]=999;
            (*returnSize)++;
        }

        printf("s=%d\n",s);
        switch(s) {
            case 0:
                if (j+1==matrixColSize[i]||matrix[i][j+1]==999) {
                    s=1;
                    k++;
                } else {
                    j++;
                    k=0;
                }
                break;
            case 1:
                if (i+1==matrixSize||matrix[i+1][j]==999) {
                    s=2;
                    k++;
                } else {
                    i++;
                    k=0;
                }
                break;
            case 2:
                if (j-1<0||matrix[i][j-1]==999) {
                    s=3;
                    k++;
                } else {
                    j--;
                    k=0;
                }
                break;
            case 3:
                if (i-1<0||matrix[i-1][j]==999) {
                    s=0;
                    k++;
                } else {
                    i--;
                    k=0;
                }
                break;
            default:
                break;
        }
        printf("k=%d\n",k);
        if (k>=2) {
            break;
        }
    }

    return re;
}
// @lc code=end

