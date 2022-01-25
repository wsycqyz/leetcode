/*
 * @lc app=leetcode id=53 lang=c
 *
 * [53] Maximum Subarray
 */

// @lc code=start


int maxSubArray(int* nums, int numsSize){
    int i=0;
    int *d;
    d=malloc(sizeof(int)*numsSize);
    int re;

    if (numsSize==0) {
        return 0;
    }

    d[0]=nums[0];
    re=d[0];

    for (i=1;i<numsSize;i++) {
        if (d[i-1]<0) {
            d[i]=nums[i];
        } else {
            d[i]=d[i-1]+nums[i];
        }
        if (re<d[i]) {
            re=d[i];
        }
    }

    return re;
}
// @lc code=end

