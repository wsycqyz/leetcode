/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int a=0,b;
        while((b=pow(2,a)-1)<num) {
            a++;
        }
        return (~num)&(b);
    }
};
// @lc code=end

