/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p1 = head;
        if(head==NULL || head->next == NULL)return head;
        ListNode* p2 = head;
        while(p2!=NULL){
            if(p1==p2){
                p2=p2->next;
            }
            else if(p1->val == p2->val){
                p2 = p2->next;
            }
            else {
                p1->next = p2;
                p1 = p1 -> next;
                p2 = p2 -> next;
            }
        }        
        p1->next = NULL;
        return head;
    }
};
// @lc code=end

