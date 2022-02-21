/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        string re;
        bool flag=false;
        int a,b;
        if (num<0) flag=true;
        num=abs(num);
        while (num!=0) {
            re=std::to_string(num%7)+re;
            num=num/7;
        }
        if (re.length()==0) return "0";
        if (flag) re='-'+re;
        return re;
    }
};
// @lc code=end

