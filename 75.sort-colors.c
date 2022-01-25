/*
 * @lc app=leetcode id=75 lang=c
 *
 * [75] Sort Colors
 */

// @lc code=start


void sortColors(int* nums, int numsSize){
    int i,j,k;
    int tmp;

    i=0;
    j=0;
    k=numsSize-1;

    while (j<=k) {
        if (nums[j]==0) {
            tmp=nums[j];
            nums[j]=nums[i];
            nums[i]=tmp;
            j++;
            i++;
        } else if (nums[j]==1) {
            j++;
        } else {
            tmp=nums[j];
            nums[j]=nums[k];
            nums[k]=tmp;
            k--;
        }
    }
}
// @lc code=end

