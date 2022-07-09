/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    int cnt=0;
    queue<int>que;
    /** Push element x onto stack. */
    void push(int x) {
        que.push(x);
        cnt++;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int i=cnt-1;
        while(i--){
            int tmp=que.front();
            que.pop();
            que.push(tmp);
        }
        int ans = que.front();
        que.pop();
        cnt--;
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        int i=cnt-1;
        while(i--){
            int tmp=que.front();
            que.pop();
            que.push(tmp);
        }
        int ans = que.front();
        que.pop();
        que.push(ans);
        return ans;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

