/*
 * @lc app=leetcode id=55 lang=c
 *
 * [55] Jump Game
 */

// @lc code=start


bool canJump(int* nums, int numsSize){
    int i,j;
    int a[numsSize];

    memset(a,0,sizeof(int)*numsSize);
    a[0]=1;

    for (i=0;i<numsSize-1;i++) {
        if (a[i]==0) {
            continue;
        }
        for (j=1;j<=nums[i];j++) {
            if (i+j<numsSize) {
                if (i+j==numsSize-1) {
                    return true;
                }
                a[i+j]=1;
                //printf("a[%d]=1\n",i+j);
            }
        }
    }

    if (a[i]==0) {
        return false;
    }
    return true;
}
// @lc code=end

