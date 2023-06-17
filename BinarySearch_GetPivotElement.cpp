//Get Pivot Element using Binary Search

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int getPivot(int a[],int n){
    
    int s=0,e=n-1;
    
    int mid=s+(e-s)/2;
    
    while(s<e){
        
        if(a[mid]>a[0])s=mid+1;
        else e=mid;
        
        mid=s+(e-s)/2;
    }
    
    return s;
    
}

int main()
{
    int a[5]={3,8,10,17,1};
    
    cout << "Pivot is:" << getPivot(a,5) << endl;
    
    return 0;
}