//TC:O(n^2)
//SC=O(n^2)
//Longest Increasing Subsequence(LIS)
//Link:-https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    
    int solveMem(int n, int a[],int curr,int prev,vector<vector<int>>&dp){
        
       if(curr==n)return 0;
       
       if(dp[curr][prev+1]!=-1)return dp[curr][prev+1];
       
       int include=0;
       if(prev==-1 || a[curr]>a[prev]){
           
          include=1+solveMem(n,a,curr+1,curr,dp); 
       }
       
       int exclude=0;
       exclude=0+solveMem(n,a,curr+1,prev,dp);
       
       return dp[curr][prev+1]=max(include,exclude);
       
    }
    
    //DP+Binary Search
    //TC:O(nlogn)
    //SC:O(n)
    //Intuitive Solution
    int solveOptimal(int n, int a[]){
        if(n==0)return 0;
        
        vector<int>ans;
        ans.push_back(a[0]);
        
        for(int i=1;i<n;i++){
            
            if(a[i]>ans.back()){
                
                ans.push_back(a[i]);
            }
            
            else{
                
                int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                a[index]=a[i];
            }
        }
        
        return ans.size();
        
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       
    //   return solveMem(n,a,0,-1,dp);
    
       return solveOptimal(n,a);
       
    }
};