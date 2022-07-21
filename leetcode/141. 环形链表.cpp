/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        ListNode* p1 = head;
        if(p1->next==NULL){
            return false;
        }
        ListNode* p2 = head->next;
        while(1){
            p2 = p2->next;
            if(p2==NULL)return false;
            p2 = p2->next;
            if(p2==NULL)return false;
            p1=p1->next;
            if(p1==p2){
                return true;
            }
        }
    }
};
// @lc code=end

