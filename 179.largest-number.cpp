/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
class Solution {
public:
    static bool compare(int& num1, int& num2) {
        string s1 = to_string(num1);
        string s2 = to_string(num2);
        string s3=s1+s2;
        string s4=s2+s1;
        if (s3>s4) {
            return true;
        }
        return false;
    }
    string largestNumber(vector<int>& nums) {
        string re;
        sort(nums.begin(), nums.end(), compare);
        for (int i : nums) {
            re += to_string(i);
        }
        if (atoi(re.c_str())==0) return "0";
        return re;
    }
};
// @lc code=end

