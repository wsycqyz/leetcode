/*
 * @lc app=leetcode id=33 lang=c
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int low,high,mid,mid1;
    int a;

    low=0;
    high=numsSize-1;
    while(low<high) {
        mid=(low+high)/2;
        if (nums[mid]>nums[high]) {
            low=mid+1;
        } else if (nums[mid]<nums[high]) {
            high=mid;
        }
    }

    a=low;
    printf("%d\n",a);
    low=0;
    high=numsSize-1;
    while(low<=high) {
        mid=(low+high)/2;
        mid1=(mid+a)%numsSize;
        if (nums[mid1]>target) {
            high=mid-1;
        } else if (nums[mid1]<target) {
            low=mid+1;
        } else if (nums[mid1]==target) {
            return mid1;
        }
    }

    return -1;
}
// @lc code=end

