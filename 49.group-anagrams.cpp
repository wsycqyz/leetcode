/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> re;
        map<map<char,int>, vector<string>> a;
        
        int i,j;
        string s;
        for (i=0;i<strs.size();i++) {
            map<char,int> m;
            for (j=0;j<strs[i].length();j++) {
                m[strs[i][j]]++;
            }
            a[m].push_back(strs[i]);
        }

        for (auto p : a) {
            re.push_back(p.second);
        }
        return re;
    }
};
// @lc code=end

