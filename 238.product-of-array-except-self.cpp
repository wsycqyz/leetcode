/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n+2),b(n+2);
        int i;
        a[0]=1;b[n+1]=1;
        for (i=0;i<n;i++) {
            a[i+1]=a[i]*nums[i];
            b[n-i]=b[n-i+1]*nums[n-i-1];
        }

        vector<int> re(n);
        for (i=1;i<=n;i++) {
            re[i-1]=a[i-1]*b[i+1];
        }
        return re;
    }
};
// @lc code=end

