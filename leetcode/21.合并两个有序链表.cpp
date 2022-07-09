/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* head;
        if(p1==NULL&&p2==NULL){
            return head;
        }
        if(p1==NULL){
            return p2;
        }
        if(p2==NULL){
            return p1;
        }
        ListNode* curr;
        if(p1->val > p2->val){
            head=p2;
            p2=p2->next;
        }
        else {
            head=p1;
            p1=p1->next;
        }
        curr=head;
        while(p1!=NULL||p2!=NULL){
            if(p1==NULL){
                curr->next=p2;
                p2=p2->next;
            }
            else if(p2==NULL){
                curr->next=p1;
                p1=p1->next;
            }
            else if(p1->val > p2->val){
                curr->next=p2;
                p2=p2->next;
            }
            else {
                curr->next=p1;
                p1=p1->next;               
            }
            curr=curr->next;
        }
        return head;
    }
};
// @lc code=end

