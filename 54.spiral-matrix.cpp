/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i;
        int left=0,top=0;
        int right=matrix[0].size();
        int bottom=matrix.size();
        vector<int> re;
        while(left<right&&top<bottom) {
            for (i=left;i<right;i++) {
                //cout << matrix[top][i] << endl;
                re.push_back(matrix[top][i]);
            }
            top++;
            if (top==bottom) break;
            for (i=top;i<bottom;i++) {
                //cout << matrix[i][right-1] << endl;
                re.push_back(matrix[i][right-1]);
            }
            right--;
            if (left==right) break;
            for (i=right-1;i>=left;i--) {
                //cout << matrix[bottom-1][i] << endl;
                re.push_back(matrix[bottom-1][i]);
            }
            bottom--;
            for (i=bottom-1;i>=top;i--) {
                //cout << matrix[left][i] << endl;
                re.push_back(matrix[i][left]);
            }
            left++;
        }
        return re;
    }
};
// @lc code=end

