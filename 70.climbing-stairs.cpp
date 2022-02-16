/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=0,t;
        int i;
        if (n==1) return 1;
        if (n==2) return 2;
        i=3;a=1;b=2;
        while(i<=n) {
            t=b+a;
            a=b;
            b=t;
            i++;
        }
        return b;
    }
};
// @lc code=end

