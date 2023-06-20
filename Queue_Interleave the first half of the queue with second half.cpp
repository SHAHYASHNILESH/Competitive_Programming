//Interleave the first half of the queue with second half
//Link:-https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int>&q){
    
    stack<int>s;
    
    int half=q.size()/2;
    
    for(int i=0;i<half;i++){
        
        int ele=q.front();
        q.pop();
        s.push(ele);
        
    }
    
    while(!s.empty()){
        
        int ele=s.top();
        s.pop();
        q.push(ele);
        
    }
    
    for(int i=0;i<half;i++){
        
        int ele=q.front();
        q.pop();
        q.push(ele);
        
    }
    
    for(int i=0;i<half;i++){
        
        int ele=q.front();
        q.pop();
        s.push(ele);
        
    }
    
    while(!s.empty()){
        
        int ele=s.top();
        s.pop();
        q.push(ele);
        ele=q.front();
        q.pop();
        q.push(ele);
        
    }
}

int main()
{
    queue<int>q;
    
    //Insertion in queue
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    
    interLeaveQueue(q);
    
    int length = q.size();
    
    for (int i = 0; i < length; i++) {
        
        cout << q.front() << " ";
        q.pop();
        
    }

    return 0;
}