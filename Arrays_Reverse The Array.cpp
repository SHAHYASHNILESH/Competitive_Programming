//Reverse The Array
//Link:-https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?leftPanelTab=0

#include <bits/stdc++.h> 

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.

	int start=m+1,end=arr.size()-1;

	while(start<=end){

		swap(arr[start],arr[end]);
		
		start++;
		end--;

	}
}
