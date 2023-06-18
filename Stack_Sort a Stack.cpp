//Sort a Stack
//Link:-https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio

#include <bits/stdc++.h>

void sortInsert(stack<int> &s,int x){

	if(s.empty()||(!s.empty() && s.top()<x)){

		s.push(x);
		return;

	}

	int num=s.top();
	s.pop();

	sortInsert(s,x);

	s.push(num);

}

void sortStack(stack<int> &stack)
{
	// Write your code here

	if(stack.empty())return;

	int num=stack.top();
	stack.pop();

	sortStack(stack);

	sortInsert(stack,num);

}