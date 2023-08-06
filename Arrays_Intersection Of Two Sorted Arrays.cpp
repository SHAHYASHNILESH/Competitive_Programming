//Intersection Of Two Sorted Arrays
//Link:-https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	
	int i=0;
	int j=0;

	vector<int>ans;

	while(i<n && j<m){

		if(arr1[i]==arr2[j]){

			ans.push_back(arr1[i]);
			i++;
			j++;
			
		}
		
		else if(arr1[i]>arr2[j])j++;
		
		else i++;
		
	}

	return ans;
	
}