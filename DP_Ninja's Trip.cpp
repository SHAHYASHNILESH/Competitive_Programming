//Ninja's Trip
//Link:-https://www.codingninjas.com/codestudio/problems/minimum-coins_2180776?leftPanelTab=0


int solveMem(int n, vector<int>&days, vector<int>&cost,int index,vector<int>&dp){
    if(index>=n)return 0;

    if(dp[index]!=-1)return dp[index];

    //1-DAY PASS
    int option1=cost[0]+solveMem(n,days,cost,index+1,dp);

    //7-DAY PASS
    int i;
    for(i=index;i<n && days[i]<days[index]+7;i++);
    int option2=cost[1]+solveMem(n,days,cost,i,dp);

    //30-DAY PASS
    for(i=index;i<n && days[i]<days[index]+30;i++);
    int option3=cost[2]+solveMem(n,days,cost,i,dp);

    int ans=min(option1,min(option2,option3));
    return dp[index]=ans;

}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return solveMem(n,days,cost,0,dp);
    
}