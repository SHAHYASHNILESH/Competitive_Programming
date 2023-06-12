//Ninja And The Fence
//Link:-https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbXpETWxNRGtZYVhUNE5FNlNBS2VQeV83WnhpZ3xBQ3Jtc0trTDl1TzR6M0N4clBfbEI0RzhWM2FtTjJhT3dTUUNkd2w2ckVyRjlCaTVPbk0xSWxWY3RFb0tuUEpPUHUweDRWYjBUTGY1OFVXdEdUUTJ0QUY5ZVVPNWR0alhVNGNIc0RlNHJwWXRPMUxrZ2tKSGRXYw&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fninja-and-the-fence_3210208%3FtopList%3Dlove-babbar-dsa-sheet-problems%26leftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=5eFh5CC-8KY
//Formula:-solve(n-2)*k-1+solve(n-1)*k-1
//For n=2, Formula:-k+k*(k-1)

#include <bits/stdc++.h>
const int M=1e9+7;

int add(int a,int b){

    return (a%M+b%M)%M;

}

int mul(int a,int b){

    return ((a%M)*1LL*(b%M))%M;

}

int solveMem(int n,int k,vector<int>&dp){

    if(n==1)return k;
    if(n==2)return add(k,mul(k,k-1));
    
    if(dp[n]!=-1)return dp[n];

    return dp[n]=add(mul(solveMem(n-1,k,dp),k-1),mul(solveMem(n-2,k,dp),k-1));

}

int numberOfWays(int n, int k) {
    // Write your code here.
    vector<int> dp(n+1,-1);

    return solveMem(n,k,dp);

}
