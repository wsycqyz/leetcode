/*
 * @lc app=leetcode id=835 lang=cpp
 *
 * [835] Image Overlap
 */

// @lc code=start
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int m=3*n-2;
        int img3[m][m];
        int i,j,k;
        int a,b,re;
        for (i=0;i<m;i++) {
            for (j=0;j<m;j++) {
                if (i>=n-1&&i<2*n-1&&j>=n-1&&j<2*n-1) {
                    img3[i][j]=img1[i-n+1][j-n+1];
                } else {
                    img3[i][j]=0;
                }
            }
        }
        re=0;
        for (i=0;i<2*n-1;i++) {
            for (j=0;j<2*n-1;j++) {
                k=0;
                for (a=0;a<n;a++) {
                    for (b=0;b<n;b++) {
                        //cout << i+a << " " << j+b << " " << a << " " << b << endl;
                        //cout << img3[i+a][j+b] << " " << img2[a][b] << endl;
                        if (img2[a][b]==1&&img3[i+a][j+b]==img2[a][b]) {
                            k++;
                        }
                    }
                }
                cout << k << endl;
                re=max(re,k);
            }
        }
        return re;
    }
};
// @lc code=end

