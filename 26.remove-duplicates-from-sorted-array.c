/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    int i=0,j=1;
    if (numsSize==0) {
        return 0;
    }
    while (j<numsSize) {
        if (nums[i]==nums[j]) {
            j++;
            continue;
        }
        i++;
        nums[i]=nums[j];
        j++;
    }

    return i+1;
}
// @lc code=end

