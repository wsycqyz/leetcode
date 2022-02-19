/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> re;
        int i;
        for (i=0;i<n;i++) {
            if ((i+1)%3==0&&(i+1)%5==0) {
                re.push_back("FizzBuzz");
            } else if ((i+1)%3==0) {
                re.push_back("Fizz");
            } else if ((i+1)%5==0) {
                re.push_back("Buzz");
            } else {
                re.push_back(std::to_string(i+1));
            }
        }
        return re;
    }
};
// @lc code=end

