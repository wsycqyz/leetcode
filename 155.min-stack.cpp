/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
    vector<pair<int,int>> data;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        pair<int,int> p;
        p.first=val;
        if (data.empty()) {
            p.second=val;
        } else {
            p.second=min(val, data.back().second);
        }
        data.push_back(p);
    }
    
    void pop() {
        data.pop_back();
    }
    
    int top() {
        return data.back().first;
    }
    
    int getMin() {
        return data.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

