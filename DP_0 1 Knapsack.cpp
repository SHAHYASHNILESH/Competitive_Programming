//0 1 Knapsack
//Link:-https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0


#include <bits/stdc++.h>

int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity,vector<vector<int>>&dp){

    if(index==0){

		if(weight[index]<=capacity){

			return value[0];
		}

		else return 0;
	}

	if(dp[index][capacity]!=-1)return dp[index][capacity];

	int include=0;

	if(weight[index]<=capacity){

			include=value[index]+solveMem(weight,value,index-1,capacity-weight[index],dp);
	}

	int exclude=0+solveMem(weight,value,index-1,capacity,dp);

	return dp[index][capacity]=max(include,exclude);

}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));

	return solveMem(weight,value,n-1,maxWeight,dp);

}