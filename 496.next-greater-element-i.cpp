/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> temp;
        int len1=nums1.size();
        int len2=nums2.size();
        vector<int> re(len1,0);
        vector<int> sta;
        
        for (int i=len2-1;i>=0;i--) {
            while(sta.size()!=0&&nums2[i]>sta.back()) {
                sta.pop_back();
            }
            if (sta.size()==0) {
                temp[nums2[i]]=-1;
            } else {
                temp[nums2[i]]=sta.back();
            }
            sta.push_back(nums2[i]);
        }

        for (int i=0;i<len1;i++) {
            re[i]=temp[nums1[i]];
        }
        return re;
    }
};
// @lc code=end

