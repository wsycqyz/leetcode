/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    int m,n;
    bool bs(vector<vector<int>>& matrix, int target, int start, bool v) {
        int low=start;
        int high=v?m-1:n-1;
        int mid;
        while(low<=high) {
            mid=(low+high)/2;
            if (v) {
                if (matrix[mid][start]==target) return true;
                if (matrix[mid][start]<target) {
                    low=mid+1;
                } else {
                    high=mid-1;
                }
            } else {
                if (matrix[start][mid]==target) return true;
                if (matrix[start][mid]<target) {
                    low=mid+1;
                } else {
                    high=mid-1;
                }
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        m=matrix.size();
        n=matrix[0].size();
        int minLen=min(m,n);
        bool v,h;
        for (int i=0;i<minLen;i++) {
            v=bs(matrix, target, i, true);
            h=bs(matrix, target, i, false);
            if (v||h) return true;
        }
        return false;
    }
};
// @lc code=end

