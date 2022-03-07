/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int tmp=0;
        int a;
        while(x) {
            a=x%10;
            x/=10;
            if ((tmp>0 && tmp>(INT_MAX)/10) || (tmp<0 && tmp<(INT_MAX)/10)) {
                return 0;
            }
            tmp=tmp*10+a;
        }
        return tmp;
    }
};
// @lc code=end

