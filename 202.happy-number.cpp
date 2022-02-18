/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int pre=n,tmp=0,a=0;
        set<int> s;
        while(pre!=1) {
            a=pre;
            tmp=0;
            while(a!=0) {
                tmp+=pow(a%10,2);
                a/=10;
            }
            //cout << tmp << endl;
            if (s.find(tmp)!=s.end()) {
                return false;
            } else {
                s.insert(tmp);
            }
            pre=tmp;
        }
        return true;
    }
};
// @lc code=end

