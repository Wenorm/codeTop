/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */

    stack<int> sta;
    stack<int> minsta;

    MinStack() {

    }
    
    void push(int val) {
        sta.push(val);
        if(minsta.size()==0){
            minsta.push(val);
        }
        else if(minsta.top() >= val){
            minsta.push(val);
        }
    }
    
    void pop() {
        int tmp = sta.top();
        sta.pop();
        if(minsta.size()==0)return;
        if(minsta.top() == tmp){
            minsta.pop();
        }
    }
    
    int top() {
        return sta.top();
    }
    
    int getMin() {
        return minsta.top();
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

