/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> re;
        string tmp;
        if (nums.size()==0) {
            return re;
        }
        int i,pre=nums[0];
        for (i=1;i<nums.size();i++) {
            if (nums[i]!=nums[i-1]+1) {
                if (pre==nums[i-1]) {
                    re.push_back(std::to_string(pre));
                } else {
                    tmp=std::to_string(pre);
                    tmp+="->";
                    tmp+=std::to_string(nums[i-1]);
                    re.push_back(tmp);
                }
                pre=nums[i];
            }
        }
        if (pre==nums[i-1]) {
            re.push_back(std::to_string(pre));
        } else {
            tmp=std::to_string(pre);
            tmp+="->";
            tmp+=std::to_string(nums[i-1]);
            re.push_back(tmp);
        }
        return re;
    }
};
// @lc code=end

