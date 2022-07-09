/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    stack<int>staa;
    stack<int>stab;
    
    /** Push element x to the back of queue. */
    void push(int x) {
        staa.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!staa.empty()){
            stab.push(staa.top());
            staa.pop();
        }
        int ans = stab.top();
        stab.pop();
        while(!stab.empty()){
            staa.push(stab.top());
            stab.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        while(!staa.empty()){
            stab.push(staa.top());
            staa.pop();
        }
        int ans = stab.top();
        while(!stab.empty()){
            staa.push(stab.top());
            stab.pop();
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return staa.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

