/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        int x=0,y=0;
        int a,b;
        string re;
        while(i>=0||j>=0) {
            if (i>=0) a=num1[i]-'0'; else a=0;
            if (j>=0) b=num2[j]-'0'; else b=0;
            x=(a+b+y)%10;
            y=(a+b+y)/10;
            re=std::to_string(x)+re;
            i--;j--;
        }
        if (y==1) {
            re="1"+re;
        }
        return re;
    }
};
// @lc code=end

