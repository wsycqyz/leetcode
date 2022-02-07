/*
 * @lc app=leetcode id=650 lang=cpp
 *
 * [650] 2 Keys Keyboard
 */

// @lc code=start
class Solution {
public:
    int minSteps(int n) {
        int i;
        int re=0;
        if (n==1) {
            return 0;
        }
        if (n<=5) {
            return n;
        }
        i=2;
        while(n>1) {
            while (n%i==0) {
                re+=i;
                n/=i;
            }
            i++;
        }
        return re;
    }
};
// @lc code=end

