/*
 * @lc app=leetcode id=396 lang=cpp
 *
 * [396] Rotate Function
 */

// @lc code=start
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int f=0,new_f;
        int i;
        int sum=0;
        int n=nums.size();
        for (i=0;i<n;i++) {
            sum+=nums[i];
            f+=(i*nums[i]);
        }
        new_f=f;
        int re=f;
        cout << f << endl;
        for (i=0;i<n-1;i++) {
            int last_one=n-1-i;
            new_f=f-nums[last_one]*(n-1)+sum-nums[last_one];
            re=max(re, new_f);
            f=new_f;
        }
        return re;
    }
};
// @lc code=end

