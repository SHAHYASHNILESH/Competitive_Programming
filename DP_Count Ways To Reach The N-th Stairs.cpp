//Count Ways To Reach The N-th Stairs

#include <bits/stdc++.h>
const int mod=1e9+7;

int solve(int nStairs,int i){
    if(i==nStairs) return 1;

    if(i>nStairs) return 0;

    return (solve(nStairs,i+1)+solve(nStairs,i+2))%mod;

} 

int countDistinctWays(int nStairs) {
    //  Write your code here.
    int ans=solve(nStairs,0);
    return ans;
}