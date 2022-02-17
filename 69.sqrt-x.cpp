/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if (x<=1) return x;
        if (x<=3) return 1;
        int low=1,high=x/2,mid,t;
        while(low<=high) {
            mid=(low+high)/2;
            t=x/mid;
            if (t==mid||t==mid-1) {
                return t;
            }
            if (mid>t) {
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return 0;
    }
};
// @lc code=end

