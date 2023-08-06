//Sort 0 1 2
//Link:-https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   
   int i=0;
   int j=0;
   int k=n-1;

   while(j<=k){

      if(arr[j]==0){

         swap(arr[i],arr[j]);
         j++;
         i++;

      }

      else if(arr[j]==1)j++;

      else if(arr[j]==2){

         swap(arr[j],arr[k]);
         k--;

      }

   }
   
}