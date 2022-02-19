/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0) return false;
        if ((n&(n-1))!=0) {
            return false;
        }
        int i=1;
        while(n!=0) {
            i++;
            n=n>>1;
        }
        if (i%2==1) return false;
        return true;
    }
};
// @lc code=end

