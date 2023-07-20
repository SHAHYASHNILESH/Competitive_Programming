//LinkedList Implementation 

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    
        int data;
        Node *next;
    
    public:
        
        Node(int val){
            
            data=val;
            next=NULL;
            
        }
};
        
void insertAtTail(Node *&head,int val){
            
    Node *newNode=new Node(val);
    
    if(head==NULL){
        
        head=newNode;
        return;
        
    }
    
    Node *temp=head;
    
    while(temp->next!=NULL){
        
        temp=temp->next;
        
    }
    
    temp->next=newNode;
    
}

void insertAtHead(Node *&head,int val){
    
    Node *newNode=new Node(val);
    
    if(head==NULL){
        
        head=newNode;
        return;
        
    }
    
    Node *temp=head;
    
    newNode->next=temp;
    head=newNode;
    
}

void insertAtPos(Node *&head,int val,int pos){
    
    Node *newNode=new Node(val);
    
    if(head==NULL){
        
        head=newNode;
        return;
        
    }
    
    if(pos==1){
        
        insertAtHead(head,val);
        return;
        
    }
    
    int count=1;
    Node *temp=head;
    
    while(count<pos-1){
        
        count++;
        temp=temp->next;
        
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
    
}

void deleteAtPos(Node *&head,int pos){
    
    Node *temp=head;
    int count=1;
    
    if(pos==1){
        
       Node *deleteNode=head;
       head=head->next;
       delete(deleteNode);
       return;
       
    }
    
    while(count<pos-1){
        
        temp=temp->next;
        count++;
        
    }
    
    Node *deleteNode=temp->next;
    temp->next=deleteNode->next;
    
    delete(deleteNode);
    
}

void deleteByVal(Node *&head,int val){
    
    Node *temp=head;
    Node *prev=head;
    
    while(temp!=NULL){
        
        if(temp->data!=val){
            
            prev=temp;
            temp=temp->next;
        }
        
        else{
            
            break;
            
        }
        
    }
    
    if(temp==NULL)return;
    
    else{
        
        prev->next=temp->next;
        delete(temp);
        
    }
    
}

bool search(Node *head,int val){
    
    Node *temp=head;
    
    while(temp!=NULL){
        
        if(temp->data==val){
            
            return true;
            
        }
        
        temp=temp->next;
        
    }
    
    return false;
    
}

void display(Node *head){
    
    Node *temp=head;
    
    while(temp!=NULL){
        
        cout << temp->data << " ";
        temp=temp->next;
        
    }
    
    cout << endl;
    
}

int main()
{
    
    Node *head=NULL;
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    
    display(head);
    
    insertAtHead(head,4);
    
    cout << search(head,3) << endl;
    
    display(head);
    
    insertAtPos(head,7,5);
    insertAtPos(head,9,1);
    
    display(head);
    
    deleteAtPos(head,1);
    deleteAtPos(head,5);
    deleteAtPos(head,3);
    
    deleteByVal(head,7);
    
    display(head);
    
    return 0;
    
}