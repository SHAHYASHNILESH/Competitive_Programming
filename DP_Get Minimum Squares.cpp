//Get Minimum Squares
//Link:-https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1

class Solution{
	public:
	int solveMem(int n,vector<int>&dp){
	    if(n==0)return 0;
	    
	    if(dp[n]!=-1)return dp[n];
	    
	    int ans=n;
	    
	    for(int i=1;i*i<=n;i++){
	        
	        ans=min(ans,1+solveMem(n-i*i,dp));
	    }
	    
	    return dp[n]=ans;
	    
	}
	
	int MinSquares(int n)
	{
	    vector<int>dp(n+1,-1);
	    return solveMem(n,dp);
	    
	}