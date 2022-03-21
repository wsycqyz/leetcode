/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A;
        vector<int> B;
        int i,j;
        int Aleft, Aright, Bleft, Bright;
        int len1 = nums1.size();
        int len2 = nums2.size();
        int total = len1 + len2;
        int half = (total) / 2;
        if (len2 < len1) {
            A = nums2;
            B = nums1;
        } else {
            A = nums1;
            B = nums2;
        }

        int left = 0, right = A.size()-1;
        while (true) {
            i = (left + right) / 2; //A
            j = half - i - 2; //B            

            if (i>=0) {
                Aleft = A[i];
            } else {
                Aleft = INT_MIN;
            }
            if (i+1<A.size()) {
                Aright = A[i+1];
            } else {
                Aright = INT_MAX;
            }            
            if (j>=0) {
                Bleft = B[j];
            } else {
                Bleft = INT_MIN;
            }
            if (j+1<B.size()) {
                Bright = B[j+1];
            } else {
                Bright = INT_MAX;
            }

            if (Aleft <= Bright && Bleft <= Aright) {
                if (total % 2) {
                    return min((double)Aright, (double)Bright);
                }
                return (max((double)Aleft, (double)Bleft) + min((double)Aright, (double)Bright)) / 2;
            } else if (Aleft > Bright) {
                right = i - 1;
            } else {
                left = i + 1;
            }
        }
    }
};
// @lc code=end

