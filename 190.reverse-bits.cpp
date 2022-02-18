/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a,b;
        uint32_t x,y;
        x=1;
        y=pow(2,31);
        for (int i=0;i<16;i++) {
            a=n&x;
            b=n&y;
            if (a==0) {
                n=n&(~y);
            } else {
                n=n|y;
            }
            if (b==0) {
                n=n&(~x);
            } else {
                n=n|x;
            }
            x=x*2;
            y=y/2;
        }
        return n;
    }
};
// @lc code=end

