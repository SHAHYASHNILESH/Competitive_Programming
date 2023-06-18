//Delete middle element from stack
//Link:-https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0&campaign=Lovebabbarcodestudio


#include <bits/stdc++.h>

void solve(stack<int>&inputStack, int count,int size){
   if(count==size/2){
      inputStack.pop();
      return;
   } 

   int num=inputStack.top();
   inputStack.pop();

   solve(inputStack,count+1,size);

   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
   
   solve(inputStack,count,N);
   
}