/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //递归解法
        /*
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *p = head->next;
        head->next = swapPairs(p->next);
        p->next = head;
        return p;
        */

       //非递归解法
       ListNode* pre = new ListNode();
       pre->next=head;
       ListNode* tmp = pre;
       while(tmp->next!=NULL&&tmp->next->next!=NULL){
           ListNode* start = tmp->next;
           ListNode* end = tmp->next->next;
           tmp->next = end;
           start->next=end->next;
           end->next=start;
           tmp=start;
       }
       return pre->next;

    }
};
// @lc code=end

