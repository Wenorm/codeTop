/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start

//  Definition for singly-linked list.
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)return true;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* pre=head;
        ListNode* prepre=NULL;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            pre=slow;
            slow=slow->next;
            pre->next=prepre;
            prepre=pre;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        while(slow!=NULL&&pre!=NULL){
            if(slow->val!=pre->val){
                return false;
            }
            slow=slow->next;
            pre=pre->next;
        }
        return true;
    }
};
// @lc code=end

