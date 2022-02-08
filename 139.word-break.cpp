/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.length()+1, false);
        dp[0]=true;
        int i,j;
        for (i=0;i<s.length();i++) {
            for (j=0;j<wordDict.size();j++) {
                if (dp[i] && 
                s.substr(i,s.length()-i).find(wordDict[j])==0) {
                    dp[i+wordDict[j].length()]=true;
                }
            }
        }
        return dp[s.length()];
    }
};
// @lc code=end

