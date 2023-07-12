//2130. Maximum Twin Sum of a Linked List
//Link:-https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75

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
        
        ListNode*slow=head;
        ListNode*fast=head;

        int maxVal=0;

        while(fast!=NULL && fast->next!=NULL){

            slow=slow->next;
            fast=fast->next->next;

        }

        ListNode*prev=NULL;
        ListNode*forward=NULL;

        while(slow!=NULL){

            forward=slow->next;
            slow->next=prev;
            prev=slow;
            slow=forward;

        }

        while(prev!=NULL){

            maxVal=max(maxVal,head->val+prev->val);

            prev=prev->next;
            head=head->next;

        }

        return maxVal;

    }
    
};