/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        vector<int> re;
        for (int i=0;i<nums2.size();i++) {
            if (s.erase(nums2[i])>0) {
                re.push_back(nums2[i]);
            }
        }        
        return re;
    }
};
// @lc code=end

