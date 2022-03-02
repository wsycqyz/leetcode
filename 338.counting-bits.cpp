/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> re;
        int i,j;
        re.push_back(0);
        if (n==0) return re;
        for (i=1;i<=n;i++) {
            j=re[i&(i-1)]+1;
            re.push_back(j);
        }
        return re;
    }
};
// @lc code=end

