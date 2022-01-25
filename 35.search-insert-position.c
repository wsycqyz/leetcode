/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

o(n) solution:
int searchInsert(int* nums, int numsSize, int target){
    int i=0,j=0;

    while(i<numsSize) {
        if (nums[i]>=target) {
            return i;
        }
        i++;
    }

    return numsSize;
}

// @lc code=start
int searchInsert(int* nums, int numsSize, int target){
    int i=0;
    int j=numsSize-1;
    int mid;

    while(i<=j) {
        mid=(i+j)/2;
        if (nums[mid]<target) {
            i=mid+1;
        } else if (nums[mid]>target) {
            j=mid-1;
        } else {
            return mid;
        }
    }

    return i;
}
// @lc code=end

