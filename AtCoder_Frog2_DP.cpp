//AtCoder 1D DP:Frog 2
//TC:O(N*k)
//Number of changing Parameters in functions:States in DP

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int h[N];
int k;
int dp[N];

int func(int i){
    
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];
    
    int cost=INT_MAX;
    
    for(int j=1;j<=k;j++){
        
        if(i-j>=0) cost=min(cost,func(i-j)+abs(h[i]-h[i-j]));
        
    }

    return dp[i]=cost; 
    
}

int main()
{
    memset(dp,-1,sizeof(dp));  //Initialize the entire dp array with -1 
     
    int n;
    cin >> n >> k;
    
    for(int i=0;i<n;i++){
        
        cin >> h[i];
    }
    
    cout << func(n-1) << endl;
    
    return 0;
    
}