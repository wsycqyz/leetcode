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
        unordered_map<string, vector<string>> a;
        
        int i;
        string s;
        for (i=0;i<strs.size();i++) {
            s=strs[i];
            sort(s.begin(),s.end());
            a[s].push_back(strs[i]);
        }

        for (auto p : a) {
            re.push_back(p.second);
        }
        return re;
    }
};
// @lc code=end

