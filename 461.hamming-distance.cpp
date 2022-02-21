/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int re=0;
        while (x!=0||y!=0) {
            if ((x&1)!=(y&1)) re++;
            x=x>>1;y=y>>1;
        }
        return re;
    }
};
// @lc code=end

