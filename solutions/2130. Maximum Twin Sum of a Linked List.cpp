//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/?envType=study-plan-v2&envId=leetcode-75

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
    int pairSum(ListNode* head) {
        /*int ret = 0;

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            fast = fast -> next;
        }

        while(slow != fast)*/

        vector<int> pairs;
    
        ListNode *listN = head;
        // && listN -> next check no need
        while(listN){
            pairs.push_back(listN->val);
            listN = listN -> next;
        }

        //use two pointers and converge

        int i =0;
        int j = pairs.size()-1;
        int maxSum = 0;
        while(i<j){
            int sum = pairs[i]+pairs[j];
            maxSum = maxSum>sum? maxSum : sum;
            i++;
            j--;
        }

        return maxSum;

    }
};