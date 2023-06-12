//ROD CUTTING
//Unbounded Knapsack type of Problem
//Another example is Coin change problem-1

#include<bits/stdc++.h>
using namespace std;

int func(int len,vector<int>&prices,vector<int>&dp){
    int ans=0;
    
    if(len==0)return 0;
    if(dp[len]!=-1)return dp[len];
    
    for(int i=1;i<=prices.size();i++){
        if(len-i>=0){
            ans=max(ans,func(len-i,prices,dp)+prices[i-1]);
        }
    }
    return dp[len]=ans;
}

int cutRod(int price[],int n){
    vector<int>prices(price,price+n);
    vector<int>dp(1005,-1);
    return func(n,prices,dp);
}

int main(){
    
}
