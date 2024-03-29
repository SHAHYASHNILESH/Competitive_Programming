//328. Odd Even Linked List
//Link:-https://leetcode.com/problems/odd-even-linked-list/description/?envType=study-plan-v2&envId=leetcode-75

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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)return NULL;

        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*hold=even;

        while(even!=NULL && even->next!=NULL){

            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;

        }

        odd->next=hold;

        return head;

    }
};