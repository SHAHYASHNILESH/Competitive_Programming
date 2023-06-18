//Insert An Element At Its Bottom In A Given Stack
//Link:-https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 

void solve(stack<int>&s, int x){

    if(s.empty()){

        s.push(x);
        return;
        
    }

    int num=s.top();
    s.pop();

    solve(s,x);

    s.push(num);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);

    return myStack;

}
