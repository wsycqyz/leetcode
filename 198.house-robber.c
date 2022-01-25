/*
 * @lc app=leetcode id=198 lang=c
 *
 * [198] House Robber
 */

// @lc code=start


int rob(int* nums, int numsSize){
    int i;
    int a,b;
    int *re;
    int max=0;

    re=malloc(sizeof(int)*numsSize);

    for (i=numsSize-1;i>=0;i--) {
        if (i+1>=numsSize) {
            a=0;
        } else {
            a=re[i+1];
        }
        if (i+2>=numsSize) {
            b=0;
        } else {
            b=re[i+2];
        }
        if (b+nums[i]>a) {
            re[i]=b+nums[i];
        } else {
            re[i]=a;
        }
        printf("%d,%d\n",i,re[i]);
        if (max<re[i]) {
            max=re[i];
        }
    }
    return max;
}
// @lc code=end

