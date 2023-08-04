//Heap Implementation
//TC:O(logn)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Heap{
    
    public:
    int arr[100];
    int size;
    
    Heap(){
        
        arr[0]=-1;
        size=0;
        
    }
    
    public:
    void insert(int val){
        
        size=size+1;
        int index=size;
        arr[index]=val;
        
        while(index>1){
            
            int par=index/2;
            
            if(arr[par]<arr[index]){
                
                swap(arr[par],arr[index]);
                index=par;
                
            }
            
            else{
                
                return;
                
            }
        }
    }
    
    void print(){
        
        for(int i=1;i<=size;i++){
            
            cout << arr[i] << " ";
            
        }
        
        cout << endl;
        
    }
    
    void deleteFromHeap(){
        
        if(size==0)return;
        
        arr[1]=arr[size];
        size--;
        
        int i=1;
        while(i<size){
            
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            
            if(leftIndex<size && arr[i]<arr[leftIndex]){
                
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
                
            }
            
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
                
            }
            
            else return;
            
        }
        
    }
    
};

//Max Heap
void heapify(int arr[],int n,int i){
    
    int largest=i;
    
    int left=2*i;
    int right=2*i+1;
    
    if(left<=n && arr[left]>arr[largest]){
        
        largest=left;
        
    }
    
    if(right<=n && arr[right]>arr[largest]){
        
        largest=right;
        
    }
    
    if(largest!=i){
        
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
        
    }
    
}

//TC:O(n logn)
void heapSort(int arr[],int n){
    
    int t=n;
    
    while(t>1){
        
        swap(arr[t],arr[1]);
        t--;
        
        heapify(arr,t,1);
        
    }
    
}

int main()
{
    
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    h.print();
    
    h.deleteFromHeap();
    
    h.print();
    
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    
    for(int i=n/2;i>0;i--){
        
        heapify(arr,n,i);
        
    }
    
    for(int i=1;i<=n;i++){
        
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
    
    heapSort(arr,n);
    
    for(int i=1;i<=n;i++){
        
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
    return 0;
    
}