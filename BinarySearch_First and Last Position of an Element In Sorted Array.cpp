//First and Last Position of an Element In Sorted Array
//Link:-https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0


#include <bits/stdc++.h>

int firstOccur(vector<int>& arr,int n,int key){
    
    int start=0;
    int end=n-1;
    int ans=-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){

      if (arr[mid] == key) {
        ans=mid;
        end=mid-1;
      }

      else if(key>arr[mid])start=mid+1;
        
      else end=mid-1;
        
      mid=start+(end-start)/2;
        
    }
    
    return ans;
    
}

int lastOccur(vector<int>& arr,int n,int key){
    
    int start=0;
    int end=n-1;
    int ans=-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        
        else if(key>arr[mid])start=mid+1;
        
        else end=mid-1;
        
        mid=start+(end-start)/2;
        
    }
    
    return ans;
    
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;

    p.first=firstOccur(arr,n,k);
    p.second=lastOccur(arr,n,k);

    return p;
}