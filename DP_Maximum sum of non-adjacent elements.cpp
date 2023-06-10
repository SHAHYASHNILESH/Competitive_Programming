//Maximum sum of non-adjacent elements

#include <bits/stdc++.h>

int solveMem(vector<int> &nums,int n,vector<int> &dp){
    if(n<0)return 0;
    if(n==0)return nums[n];

    //STEP-3
    if(dp[n]!=-1)return dp[n];

    int include=solveMem(nums,n-2,dp)+nums[n];
    int exclude=solveMem(nums,n-1,dp)+0;

    int ans=max(include,exclude);

    //STEP-2
    return dp[n]=ans;

}

int maximumNonAdjacentSum(vector<int> &nums){

    //STEP-1
    int n=nums.size();
    vector<int>dp(n,-1);
    return solveMem(nums,n-1,dp);
}