//Reverse Linked List
//Link:-https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here

    if(head==NULL || head->next==NULL)return head;

    LinkedListNode<int>*curr=head;
    LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>*forward=NULL;

    while(curr!=NULL){

        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }

    return prev;

}