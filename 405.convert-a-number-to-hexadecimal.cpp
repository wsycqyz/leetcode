/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        int i,j,k;
        string re;
        char tmp;
        for (i=0;i<8;i++) {
            k=num&0xf;
            if (k>=10) {
                tmp='a'+k-10;
            } else {
                tmp='0'+k;
            }
            re+=tmp;
            num=num>>4;
        }
        string re2;
        i=re.length()-1;
        while(i>=0&&re[i]=='0') i--;
        while(i>=0) {re2+=re[i];i--;};
        if (re2.length()==0) re2+='0';
        return re2;
    }
};
// @lc code=end

