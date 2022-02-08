/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> re(rowIndex+1,1);
        int i,j;
        for (i=2;i<=rowIndex;i++) {
            for (j=i-1;j>0;j--) {
                re[j]+=re[j-1];
            }
        }
        return re;
    }
};
// @lc code=end

