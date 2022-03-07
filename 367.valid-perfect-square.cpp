/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num/2,mid;
        if (num==1) return true;
        while(low<=high) {
            mid=(low+high)/2;
            if (num%mid==0&&num/mid==mid) {
                return true;
            }
            if (num/mid < mid) {
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return false;
    }
};
// @lc code=end

