//Remove duplicates from a sorted Doubly Linked List
//Link:-https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0&campaign=YouTube_Lovebabbar29thJan

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here

    if(head==NULL)return NULL;

    Node *curr=head;

    while(curr!=NULL){

        if((curr->next!=NULL) && (curr->data==curr->next->data)){
            Node *deleteNode=curr->next;
            curr->next=curr->next->next;
            delete(deleteNode);

        }

        else{

            curr=curr->next;

        }

    }

    return head;

}
