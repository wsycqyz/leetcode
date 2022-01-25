/*
 * @lc app=leetcode id=56 lang=c
 *
 * [56] Merge Intervals
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int comp(const void*a, const void*b) {
    return ((int**)a)[0][0]-((int**)b)[0][0];
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes){
    int **re=NULL;
    *returnSize=0;
    int i,j;
    int **a=intervals;

    re=malloc(sizeof(int*)*intervalsSize);
    *returnColumnSizes=malloc(sizeof(int)*intervalsSize);

    if (intervalsSize==1) {
        *returnSize=1;
        (*returnColumnSizes)[0]=2;
        return intervals;
    }

    qsort(intervals,intervalsSize,sizeof(int)*2,comp);

    re[0]=malloc(sizeof(int)*2);
    (*returnColumnSizes)[0]=2;
    re[0][0]=a[0][0];
    re[0][1]=a[0][1];
    (*returnSize)++;

    for (i=1;i<intervalsSize;i++) {
        if (re[*returnSize-1][1]<a[i][0]) {
            re[*returnSize]=malloc(sizeof(int)*2);
            re[*returnSize][0]=a[i][0];
            re[*returnSize][1]=a[i][1];
            (*returnColumnSizes)[*returnSize]=2;
            (*returnSize)++;
        } else {
            if (re[*returnSize-1][0]>a[i][0]) {
                re[*returnSize-1][0]=a[i][0];
            }
            if (re[*returnSize-1][1]<a[i][1]) {
                re[*returnSize-1][1]=a[i][1];
            }
        }
    }

    return re;
}
// @lc code=end

