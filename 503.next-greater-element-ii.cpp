/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len1=nums.size();
        int len2=len1*2;
        vector<int> new_nums(len2);
        for (int i=0;i<len2;i++) {
            new_nums[i]=nums[i%len1];
        }
        vector<int> tmp(len2,0);
        vector<int> sta;

        for (int i=len2-1;i>=0;i--) {
            while(sta.size()!=0&&new_nums[i]>=sta.back()) {
                sta.pop_back();
            }
            if (sta.size()==0) {
                tmp[i]=-1;
            } else {
                tmp[i]=sta.back();
            }
            sta.push_back(new_nums[i]);
        }

        vector<int> re;
        for (int i=0;i<len1;i++) {
            re.push_back(tmp[i]);
        }
        return re;
    }
};
// @lc code=end

