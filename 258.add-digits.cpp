/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

https://en.wikipedia.org/wiki/Digital_root
b based,
n!= 0: result = 1 + (n-1) % (b-1)
n = 0: result = 0

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        return 1+(num-1)%9;
    }
};
// @lc code=end

