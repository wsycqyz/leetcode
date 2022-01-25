/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *re;
    int i,j;

    for (i=0;i<numsSize-1;i++) {
        for (j=i+1;j<numsSize;j++) {
            if (nums[i]+nums[j]==target) {
                re=malloc(sizeof(int)*2);
                re[0]=i;
                re[1]=j;
                *returnSize=2;
                return re;
            }
        }
    }

    *returnSize=0;
    return 0;
}
// @lc code=end

