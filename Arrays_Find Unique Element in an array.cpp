//Find Unique Element in an array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here

    unordered_map<int,int>mp;

    for(int i=0;i<size;i++){

        mp[arr[i]]++;

    }

    for(auto x:mp){

        if(x.second==1)return x.first;

    }
    
    return -1;
    
}

int main()
{
    int arr[7]={2,3,1,6,3,6,2};
    
    int ans=findUnique(arr,7);
    
    cout << ans << endl;
    
    return 0;
    
}