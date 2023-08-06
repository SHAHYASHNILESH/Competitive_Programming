//Pair Sum
//Link:-https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.

   vector<vector<int>>ans;

   for(int i=0;i<arr.size();i++){

      for(int j=i+1;j<arr.size();j++){

         if(arr[i]+arr[j]==s){

            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));

            ans.push_back(temp);

         }
         
      }
   }

   sort(ans.begin(),ans.end());

   return ans;

}