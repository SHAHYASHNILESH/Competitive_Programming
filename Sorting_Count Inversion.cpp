//Count Inversions
//Link:-https://www.codingninjas.com/studio/problems/count-inversions_615?leftPanelTab=0

#include <bits/stdc++.h>

long long merge(long long *&arr,int s,int mid,int e){
   
   long long inv=0;
   
   int len1=mid-s+1;
   int len2=e-mid;

   int a[len1];
   int b[len2];

   for(int i=0;i<len1;i++){

       a[i]=arr[s+i];

   }

   for(int i=0;i<len2;i++){

       b[i]=arr[mid+i+1];
       
   }

   int i=0,j=0,k=s;

   while(i<len1 && j<len2){

       if(a[i]<=b[j]){
          
          arr[k++]=a[i++];

       }

       //a[i]>a[j] and i<j -->Inversion Criteria
       else{

         arr[k++]=b[j++];
         inv+=(len1-i);

       }
   }

   while(i<len1){

       arr[k++]=a[i++];
   
   }
   
   while(j<len2){

       arr[k++]=b[j++];

   }

   return inv;
   
}

long long solve(long long *&arr,int s,int e){

    long long inv=0;

    if(s<e){

        int mid=(s+e)/2;

        inv+=solve(arr,s,mid);
        inv+=solve(arr,mid+1,e);
        inv+=merge(arr,s,mid,e);

    }

    return inv;

}

long long getInversions(long long *arr, int n){
    // Write your code here.

    return solve(arr,0,n-1);
    //return ans;
        
}