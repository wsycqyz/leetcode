/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len_s=s.length();
        int len_p=p.length();
        if (len_s<len_p) return {};
        int i;
        vector<int> window(26,0);
        vector<int> freq_p(26,0);
        for (i=0;i<len_p;i++) {
            window[s[i]-'a']++;
            freq_p[p[i]-'a']++;
        }
        vector<int> re;
        if (window==freq_p) re.push_back(0);

        for (i=1;i<=len_s-len_p;i++) {
            window[s[i-1]-'a']--;
            window[s[i-1+len_p]-'a']++;
            if (window==freq_p) re.push_back(i);
        }
        return re;
    }
};
// @lc code=end

