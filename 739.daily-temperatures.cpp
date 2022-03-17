/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> temp;
        int len = temperatures.size();
        vector<int> re(len,0);
        temp.push_back(len-1);

        for (int i=len-2;i>=0;i--) {
            while(temp.size()!=0 && temperatures[i]>=temperatures[temp.back()]) {
                temp.pop_back();
            }
            if (temp.size()==0) {
                re[i]=0;
            } else {
                re[i]=temp.back()-i;
            }
            temp.push_back(i);
        }

        return re;
    }
};
// @lc code=end

