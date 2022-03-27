/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> m;
        for (auto i = 0; i < mat.size(); ++i) {
            auto p = accumulate(begin(mat[i]), end(mat[i]), 0);
            m.insert({p, i});
        }
        vector<int> res;
        for (auto it = begin(m); k > 0; ++it, --k)
            res.push_back(it->second);
        return res;
    }

// @lc code=start
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat[0].size();
        for(int i=0; i<mat.size(); i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        for (int i=0;i<mat.size();i++) {
            for (int j=0;j<mat[i].size();j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i]=mat[i][n];            
        }
        return ans;
    }
};
// @lc code=end

