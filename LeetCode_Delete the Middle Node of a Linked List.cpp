//2095. Delete the Middle Node of a Linked List
//Link:-https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75

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
    int getLen(ListNode *head){

        int len=0;

        while(head!=NULL){

            len++;
            head=head->next;

        }

        return len;

    }

    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode *temp=head;

        if(head==NULL || head->next==NULL) return NULL;

        int len=getLen(head);

        int ans=(len/2)-1;
        
        int count=0;

        while(count<ans){

            count++;
            temp=temp->next;

        }

        temp->next=temp->next->next;

        return head;

    }
};