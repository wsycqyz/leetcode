/*
 * @lc app=leetcode id=15 lang=c
 *
 * [15] 3Sum
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int comp(const void*a, const void*b) {
    return *(int*)a-*(int*)b;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int i,j,k;
    *returnSize=0;

    if (numsSize==0) {
        return NULL;
    }

    qsort(nums,numsSize,sizeof(int),comp);

    *returnColumnSizes=(int*)malloc(sizeof(int)*numsSize*numsSize);
    int **re = (int**)malloc(sizeof(int*)*numsSize*numsSize);

    for (i=0;i<numsSize-2;i++) {
        if (nums[i]>0) {
            break;
        }
        if (i>0&&nums[i]==nums[i-1]){
            continue;
        }
        j=i+1;
        k=numsSize-1;
        while(j<k) {
            if (nums[i]+nums[j]+nums[k]==0) {
                (*returnColumnSizes)[*returnSize]=3;
                re[*returnSize]=(int*)malloc(sizeof(int)*3);
                re[*returnSize][0]=nums[i];
                re[*returnSize][1]=nums[j];
                re[*returnSize][2]=nums[k];
                (*returnSize)++;
                j++;
                while(j<k&&nums[j]==nums[j-1]) {
                    j++;
                }
            } else if (nums[i]+nums[j]+nums[k]>0) {
                k--;
            } else if (nums[i]+nums[j]+nums[k]<0) {
                j++;
            }
        }
    }
    return re;
}
// @lc code=end

