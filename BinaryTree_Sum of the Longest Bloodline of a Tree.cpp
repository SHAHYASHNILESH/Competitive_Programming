//Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node)
//Link:-https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

public:
    
    void solve(Node *root,int len,int &maxLen,int sum,int &maxSum){
        
        if(root==NULL){
            
            if(len>maxLen){
                
                maxLen=len;
                maxSum=sum;
                
            }
            
            else if(len==maxLen){
                
                maxSum=max(sum,maxSum);
                
            }
            
            return;
            
        }
        
        sum+=root->data;
        
        solve(root->left,len+1,maxLen,sum,maxSum);
        solve(root->right,len+1,maxLen,sum,maxSum);
        
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        
        int len=0,maxLen=0;
        
        int sum=0;
        
        int maxSum=INT_MIN;
        
        solve(root,len,maxLen,sum,maxSum);
        
        return maxSum;
        
    }