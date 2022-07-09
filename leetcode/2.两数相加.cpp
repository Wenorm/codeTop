/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1!=NULL||p2!=NULL){
            int a = 0;
            int b = 0;
            if(p1!=NULL){
                a = p1->val;
                p1=p1->next;
            }
            if(p2!=NULL){
                b = p2->val;
                p2=p2->next;
            }
            int tmp = (a+b+head->val)%10;
            head->val = (a+b+head->val)/10;
            ListNode* t = new ListNode(tmp);
            p->next = t;
            p = p->next;

            
        }
        if(head->val!=0){
            ListNode* t = new ListNode(head->val);
            p->next = t;
            p = p->next;
        }
        return head->next;
    }
};
// @lc code=end

