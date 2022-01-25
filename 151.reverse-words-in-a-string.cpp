/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        int i,j;
        stack<string> tmp;
        string re;
        bool first=true;

        for (i=0;i<s.length();i++) {
            while (s[i]==' '&&i<s.length()) {
                i++;
            }
            if (i==s.length()) {
                break;
            }
            j=i;
            while (s[j]!=' '&&j<s.length()) {
                j++;
            }
            cout << s.substr(i,j-i) << endl;
            tmp.push(s.substr(i,j-i));
            i=j;
        }

        while(tmp.size()!=0) {
            if (first) {
                re+=tmp.top();
                first=false;
            } else {
                re+=" ";
                re+=tmp.top();
            }
            tmp.pop();
        }

        return re;
    }
};
// @lc code=end

