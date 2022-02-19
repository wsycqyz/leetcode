/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int i,re=0;
        for (i=0;i<s.length();i++) {
            re=re-s[i]+t[i];
        }
        re=re+t[i];
        return re;
    }
};
// @lc code=end

