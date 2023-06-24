//Remove Duplicates From an Unsorted Linked List
//Link:-https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // Write your code here

    if(head==NULL)return NULL;
    
    unordered_map<int,int>visited;
    
    Node *curr=head;
    Node *prev=NULL;
    
    while(curr!=NULL){
        
        if(!visited[curr->data]){
            
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;

        }

        else {

          prev->next = curr->next;
          delete(curr);

        }

        curr=prev->next;
        
    }
    
    return head;

}