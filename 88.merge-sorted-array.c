/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

// @lc code=start


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i,j,k;

    i=m-1;
    j=n-1;
    k=nums1Size-1;

    while(i>=0&&j>=0&&k>=0) {
        if (nums1[i]>nums2[j]) {
            nums1[k]=nums1[i];
            i--;
        } else {
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }

    if (i==-1) {
        for (i=0;i<=j;i++) {
            nums1[i]=nums2[i];
        }
    }
}
// @lc code=end

