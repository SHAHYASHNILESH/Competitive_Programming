//Fibonacci Numbers using Dynamic Programming
// 0 1 1 2 3 5 8...
//TC:O(N)
//fib(n)-->nth Fibonacci Number

//Top Down Approach done using Recursion
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int dp[N];

int fib(int n){
    
    if(n==0)return 0;
    if(n==1)return 1;
    
    if(dp[n]!=-1)return dp[n];   //Memoise
    
    return dp[n]=fib(n-2)+fib(n-1);
}

int main()
{
    memset(dp,-1,sizeof(dp));  //Initialize the entire dp array with -1 
    
    int n;
    cin >> n;
    cout << fib(n) << endl;
    
    //Bottom Up Approach
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-2]+dp[i-1];
    }
    
    return 0;
    
}