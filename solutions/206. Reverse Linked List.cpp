//https://leetcode.com/problems/reverse-linked-list/?envType=study-plan-v2&envId=leetcode-75

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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *prev = nullptr;
        ListNode *cur = head;

        while(cur){
            ListNode *nextTemp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextTemp;
        }

        return prev;
        /*if (head == NULL || head -> next == NULL) return head;

        ListNode* rest = reverseList(head->next);
        head->next->next = head;

        head->next = NULL;

        return rest;*/
    }
};