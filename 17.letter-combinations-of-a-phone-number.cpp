/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int len=digits.length();
        if (len==0) return {};
        vector<string> board(10);
        board[2]="abc";
        board[3]="def";
        board[4]="ghi";
        board[5]="jkl";
        board[6]="mno";
        board[7]="pqrs";
        board[8]="tuv";
        board[9]="wxyz";
        vector<string> re;
        re.push_back("");
        int i=0,j=0,k=0;
        for (i=0;i<len;i++) {
            char digit=digits[i];
            vector<string> tmp;
            for (j=0;j<board[digit-'0'].length();j++) {
                for (k=0;k<re.size();k++) {
                    tmp.push_back(re[k]+board[digit-'0'][j]);
                }
            }
            re.swap(tmp);
        }
        return re;
    }
};
// @lc code=end

