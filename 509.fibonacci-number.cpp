/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c=0;
        if (n<=1) return n;
        int i=2;
        while(i<=n) {
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        return c;
    }
};
// @lc code=end

