/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */
Heap solution:
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> heap;
        int i;

        for (i=0;i<nums.size();i++) {
            if (heap.size()<k) {
                heap.push_back(nums[i]);
                if (heap.size()==k) {
                    make_heap(heap.begin(), heap.end(), greater<>());            }
                } else {
                    if (nums[i]>heap.front()) {
                        pop_heap(heap.begin(), heap.end(), greater<>());
                        heap.pop_back();
                        heap.push_back(nums[i]);
                        push_heap(heap.begin(), heap.end(), greater<>());
                }
            }
        }

        return heap.front();
    }
};

// @lc code=start
class Solution {
public:
    void printvector(vector<int>& n) {
        for (int i=0;i<n.size();i++) {
            cout << n[i] << " ";
        }
        cout << endl;
    }
    int partition(vector<int>& nums, int lo, int hi) {
        int p;
        p=nums[lo];
        int i=lo+1;
        int j=hi;
        while(i<=j) {
            if (nums[i]<p&&nums[j]>p) {
                swap(nums[i],nums[j]);
                //cout << i << " " << j << endl;
                //printvector(nums);
                i++;j--;
            }     
            if (nums[i]>=p) {
                i++;
            }
            if (nums[j]<=p) {
                j--;
            }       
        }
        swap(nums[lo], nums[j]);
        //printvector(nums);
        return j;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int lo,hi,i;
        lo=0;
        hi=nums.size()-1;
        while(true) {
            cout << "new round:" << endl;
            i=partition(nums, lo, hi);
            if (i==k-1) {
                return nums[i];
            }
            if (i<k-1) {
                lo=i+1;
            } else {
                hi=i-1;
            }
        }
        return 0;
    }
};
// @lc code=end

