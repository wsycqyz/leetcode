/*
 * @lc app=leetcode id=268 lang=c
 *
 * [268] Missing Number
 */

// @lc code=start


int missingNumber(int* nums, int numsSize){
    long int i=0;

    while(numsSize>0) {
        i+=numsSize;
        i-=nums[numsSize-1];
        numsSize--;
    }
    return i;
}
// @lc code=end

