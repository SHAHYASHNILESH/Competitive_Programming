//Count derangements or Hat Problem
//Link:-https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazFaQUx1QlNrWEZUelZ6STVvRjdYaTJNRGZVUXxBQ3Jtc0trZkVWLVo4cWI2N04zRnpSemxoUElpRk0ydFVVUlhyWTBJdlE2aTFqenNxaHhHNEI2MkkxamlEVDBNVHRZcm9sVkkzNzhNUHpmdzBKUFN0RVJTSVpsLVRQZ1BCVGZ4T3JfQUt4MU1HT2Q1REpfSGVnUQ&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fcount-derangements_873861%3FleftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=NW-BLDQHFXk
//Formula:-f(n)=(n-1)*[f(n-2)+f(n-1)]
//Logic:-(n-1)*[Solution of Subproblems]

#include<bits/stdc++.h>
const int M=1e9+7;

long long int solveMem(int n,vector<long long int>&dp){
    if(n==1)return 0;
    if(n==2)return 1;

    if(dp[n]!=-1)return dp[n];

    dp[n]=((n-1)%M*(solveMem(n-1,dp)%M+solveMem(n-2,dp)%M)%M);
    return dp[n];

}

long long int countDerangements(int n) {

    // Write your code here.

    vector<long long int>dp(n+1,-1);

    return solveMem(n,dp);
}