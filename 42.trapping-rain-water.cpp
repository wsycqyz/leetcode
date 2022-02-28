/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftMax[n];
        int rightMax[n];
        int i,re=0;
        leftMax[0]=0;
        rightMax[n-1]=0;
        for (i=1;i<n;i++) {
            leftMax[i]=max(leftMax[i-1],height[i-1]);
            rightMax[n-i-1]=max(rightMax[n-i], height[n-i]);
            //cout << leftMax[i] << " " << rightMax[n-i-1] << endl;
        }
        for (i=0;i<n;i++) {
            if (min(leftMax[i],rightMax[i])-height[i]>0) {
                re+=(min(leftMax[i],rightMax[i])-height[i]);
            }
        }
        return re;
    }
};
// @lc code=end

