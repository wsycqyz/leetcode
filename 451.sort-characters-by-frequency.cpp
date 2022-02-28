/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        vector<string> bucket(s.size()+1);
        int i;
        for (i=0;i<s.length();i++) {
            freq[s[i]]++;
        }
        for (auto& it:freq) {
            int n=it.second;
            char c=it.first;
            bucket[n].append(n,c);
        }
        string re;
        for (i=s.size();i>=0;i--) {
            if (!bucket[i].empty()) {
                re.append(bucket[i]);
            }
        }
        return re;
    }
};
// @lc code=end

