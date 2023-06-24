//To Check whether the LL is Circular or Not
//TC:-O(n)
//SC:-O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isCircular(Node *head){
    
    //Empty List ->Circular
    if(head==NULL)return true;
    
    //More than or equal to one List
    Node *temp=head->next;
    
    while(temp!=NULL && temp!=head){
        
        temp=temp->next;
        
    }
    
    if(temp==head)return true;
    
    return false;
    
}


int main()
{
    cout<<"Hello World";

    return 0;
}