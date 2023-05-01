//AtCoder 1D DP:Frog 1
//TC:O(N)
//Number of changing Parameters in functions:States in DP

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int h[N];
int dp[N];

int func(int i){
    
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];
    
    int cost=INT_MAX;
    
    cost=min(cost,func(i-1)+abs(h[i]-h[i-1]));
    
    if(i>1){
        
        cost=min(cost,func(i-2)+abs(h[i]-h[i-2]));
    }
    
    return dp[i]=cost; 
}

int main()
{
    
    memset(dp,-1,sizeof(dp));  //Initialize the entire dp array with -1 
     
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        
        cin >> h[i];
        
    }
    
    cout << func(n-1) << endl;
    
    return 0;
}