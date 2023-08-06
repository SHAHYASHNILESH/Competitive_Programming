//Swap Alternately Array Elements

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,3,2,7,11,8};
    
    int size=6;
    
    for(int i=0;i<size;i+=2){
        
        if(i+1<size){
            
            swap(arr[i],arr[i+1]);
            
        }
    }
    
    for(int i=0;i<size;i++){
        
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
    return 0;
    
}