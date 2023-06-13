//Combination Sum IV
//Link:-https://www.codingninjas.com/codestudio/problems/number-of-ways_3755252?leftPanelTab=0

#include <bits/stdc++.h>

int solveMem(vector<int> &num, int tar,vector<int>&dp){
     if(tar==0)return 1;
     if(tar<0)return 0;

     if(dp[tar]!=-1)return dp[tar];

     int ans=0;

     for(int i=0;i<num.size();i++){

         ans+=solveMem(num,tar-num[i],dp);
     }

     return dp[tar]=ans;
}

int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();

    vector<int>dp(tar+1,-1);
    
    return solveMem(num,tar,dp);

}