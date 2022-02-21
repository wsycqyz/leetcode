/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i=2,j=1;
        if (num==1) return false;
        while(i<=num/2) {
            if (num%i==0) {
                j+=i;
                if (j>num) return false;
            }
            i++;
        }
        if (j==num) return true;
        return false;
    }
};
// @lc code=end

