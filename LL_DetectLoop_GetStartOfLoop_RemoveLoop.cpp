//Detecting Loop in LL(TC:O(n) and SC:O(n))
//Detecting Loop and Getting the start of Loop in LL using Floyd Cycle Detection Algorithm(TC:O(n) and SC:O(1)) -->Very Important Algorithm
//Remove Loop(TC:O(n) and SC:O(1))

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool DetectLoop(Node * head){
    
    if(head==NULL)return false;
    
    map<Node *,bool>visited;
    
    Node *temp=head;
    
    while(temp!=NULL){
        
        if(visited[temp]==true){
            
            cout << "Cycle/Loop present at" << temp->data << endl;
            return true;
            
        }
        
        visited[temp]=true;
        temp=temp->next;
        
    }
    
    return false;
    
}

Node* FloydCycleDetection(Node *head){
    
    if(head==NULL)return NULL;
    
    Node *slow=head;
    Node *fast=head;
    
    while(slow!=NULL && fast!=NULL){
        
        fast=fast->next;
        
        if(fast!=NULL)fast=fast->next;
        
        slow=slow->next;
        
        if(slow==fast){
            cout << "Cycle Present at " << slow->data << endl;
            return slow;
            
        }
    }
    
    return NULL;
    
}

//A+B=k*C
Node* getStartNodeOfLoop(Node *head){
    
    if(head==NULL)return NULL;
    
    Node *intersection=FloydCycleDetection(head);
    Node *slow=head;
    
    while(slow!=intersection){
        
        slow=slow->next;
        intersection=intersection->next;
        
    }
    
    return slow;
    
}

void removeLoop(Node *head){
    
    if(head==NULL)return;
    
    Node *startOfLoop=getStartNodeOfLoop(head);
    
    Node *temp=startOfLoop;
    
    while(temp->next!=startOfLoop){
        
        temp=temp->next;
        
    }
    
    temp->next=NULL;
    
}

int main()
{
    cout<<"Hello World";

    return 0;
}