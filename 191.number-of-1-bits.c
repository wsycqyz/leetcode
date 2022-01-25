/*
 * @lc app=leetcode id=191 lang=c
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
int hammingWeight(uint32_t n) {
    int re=0;

    while(n>0) {
        if (n&1>0) re++;
        n=n>>1;
    }

    return re;
}
// @lc code=end

