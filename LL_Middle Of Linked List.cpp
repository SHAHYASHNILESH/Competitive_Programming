//Middle Of Linked List
//Link:-https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

int getLength(Node *head){

    int len=0;

    while(head!=NULL){

        len++;
        head=head->next;

    }

    return len;

}

Node *findMiddle(Node *head) {
    // Write your code here
    Node *temp=head;

    int len=getLength(head);

    int ans=(len/2);

    int count=0;

    while(count<ans){

        temp=temp->next;
        count++;

    }

    return temp;

}

