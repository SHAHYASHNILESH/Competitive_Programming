//3Sum
//Link:-https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0

#include <bits/stdc++.h> 

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.

	vector<vector<int>>ans;

	sort(arr.begin(),arr.end());

	for(int i=0;i<n;i++){

		int a=arr[i];
		int start=i+1;
		int end=n-1;

		while(start<end){

			if(arr[start]+arr[end]+a==K){

				ans.push_back({a,arr[start],arr[end]});

				while(start<end && arr[start]==arr[start+1])start++;
                while(start<end && arr[end]==arr[end-1])end--;
				
				start++;
				end--;

			}

			else if(arr[start]+arr[end]+a>K)end--;

			else start++;

		}

		while(i+1<n && arr[i+1]==arr[i])i++;

	}

	return ans;
	
}