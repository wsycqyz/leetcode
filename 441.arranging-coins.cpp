/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        if (n<=1) return n;
        int i=0;
        while(n-i>=i+1) {
            n=n-i;
            i++;
        }
        return i;
    }
};
// @lc code=end

