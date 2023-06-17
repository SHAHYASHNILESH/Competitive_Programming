//Binary Search

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int key){
    
    int start=0;
    int end=n-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        
        if(a[mid]==key)return mid;
        
        if(key>a[mid])start=mid+1;
        
        else end=mid-1;
        
        mid=start+(end-start)/2;
        
    }
    
    return -1;
    
}

int main()
{
    int a[6]={1,2,3,4,5,6};
    
    int ans=solve(a,6,4);
    
    cout << "Position of 4 is:" << ans << endl;
    
    return 0;
}