//Reverse List In K Groups
//Link:-https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0&campaign=Lovebabbar_codestudio_26thjan

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.

    int size = 0;
    Node* temp = head;

    while(temp!=NULL){

        temp = temp -> next;
        size++;
        
    }

    if(size < k)return head;

    if(head==NULL)return head;

    Node*curr=head;
    Node*prev=NULL;
    Node*forward=NULL;
    int count=0;

    while(curr!=NULL && count<k){

        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;

    }

    if(forward!=NULL){

        head->next=kReverse(forward,k);

    }

    return prev;

}