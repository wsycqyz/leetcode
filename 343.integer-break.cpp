/*
 * @lc app=leetcode id=343 lang=cpp
 *
 * [343] Integer Break
 */

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
        if (n==2) return 1;
        if (n==3) return 2;
        int p=1;
        while (n>4) {
            p*=3;
            n-=3;
        }
        p*=n;
        return p;
    }
};
// @lc code=end

