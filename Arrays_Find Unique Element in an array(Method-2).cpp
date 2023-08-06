//Find Unique
//Link:-https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

#include<bits/stdc++.h>

int findUnique(int *arr, int size)
{
    //Write your code here

    int ans=0;

    for(int i=0;i<size;i++){

        ans^=arr[i];

    }

    return ans;
    
}