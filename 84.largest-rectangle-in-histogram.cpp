/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int s=heights.size();
        vector<int> from_left(s+2);
        vector<int> from_right(s+2);
        vector<pair<int,int>> st;
        st.push_back(pair(0,-1));
        int i,re=-1;
        for (i=1;i<=s;i++) {
            while(heights[i-1]<=st.back().second) {
                st.pop_back();
            }
            from_left[i]=st.back().first;
            st.push_back(pair(i,heights[i-1]));
        }
        /*
        for (i=1;i<from_left.size()-1;i++) {
            cout << from_left[i] << " ";
        }
        cout << endl;
        */
        st.clear();
        st.push_back(pair(s+1,-1));
        for (i=s;i>=1;i--) {
            while(heights[i-1]<=st.back().second) {
                st.pop_back();
            }
            from_right[i]=st.back().first;
            st.push_back(pair(i,heights[i-1]));
        }
        /*
        for (i=1;i<from_right.size()-1;i++) {
            cout << from_right[i] << " ";
        }
        cout << endl;
        */
        for (i=1;i<=s;i++) {
            re=max(re, heights[i-1]*(from_right[i]-from_left[i]-1));
        }

        return re;
    }
};
// @lc code=end

