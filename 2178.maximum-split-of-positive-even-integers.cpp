/*
 * @lc app=leetcode id=2178 lang=cpp
 *
 * [2178] Maximum Split of Positive Even Integers
 */

// @lc code=start
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if (finalSum%2) {
            return {};
        }
        vector<long long> re = {2};
        finalSum -= 2;
        while(re.back() < finalSum) {
            finalSum -= re.back() + 2;
            re.push_back(re.back() + 2);
        }
        re.back() += finalSum;
        return re;
    }
};
// @lc code=end

