/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int i=0,j=0;

    while (j<numsSize) {
        if (nums[j]==val) {
            j++;
            continue;
        }
        nums[i]=nums[j];
        i++;
        j++;
    }
    return i;
}
// @lc code=end

