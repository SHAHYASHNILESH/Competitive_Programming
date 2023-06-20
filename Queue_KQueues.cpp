//How to efficiently implement k Queues in a single array?
//Link:-https://www.geeksforgeeks.org/efficiently-implement-k-queues-single-array/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class kQueue{
    
    public:
      
      int n,k,*front,*rear,*arr,freeSpot,*next;
    
    public:
    
      kQueue(int n,int k){
          this->n=n;
          this->k=k;
          
          front=new int[k];
          rear=new int[k];
          
          for(int i=0;i<k;i++){
              
              front[i]=rear[i]=-1;
              
          }
          
          next=new int [n];
          for(int i=0;i<n;i++){
              
              next[i]=i+1;
              
          }
          
          next[n-1]=-1;
          
          arr=new int[n];
          
          freeSpot=0;
          
      }
      
      void enqueue(int data,int qn){
        
        //Overflow
        if(freeSpot==-1){
            
            cout << "Queue Overflow" << endl;
            return;
            
        }
        
        //Find First Free Index
        int index=freeSpot;
        
        //Update Free Spot
        freeSpot=next[index];
        
        //Check whether first element
        if(front[qn-1]==-1){
            
            front[qn-1]=index;
            
        }
        
        else{
            
            //Link new element to previous element
            next[rear[qn-1]]=index;
            
        }
        
        //Update next
        next[index]=-1;
        
        //Update rear
        rear[qn-1]=index;
        
        //Push element
        arr[index]=data;
        
      }
      
      int dequeue(int qn){
          
          if(front[qn-1]==-1){
              
              cout << "Queue Underflow" << endl;
              return -1;
              
          }
          
          int index=front[qn-1];
          
          front[qn-1]=next[index];
          
          next[index]=freeSpot;
          
          freeSpot=index;
          
          return arr[index];
          
      }
};

int main()
{
    
    kQueue q(10,3);
    
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);
    
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    return 0;
    
}