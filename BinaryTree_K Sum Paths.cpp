//K Sum Paths
//Link:-https://practice.geeksforgeeks.org/problems/k-sum-paths/1

class Solution{
  public:
    void solve(Node *root,int &count,vector<int>&path,int &k){
        
        if(root==NULL)return;
        
        path.push_back(root->data);
        
        solve(root->left,count,path,k);
        
        solve(root->right,count,path,k);
        
        int sum=0;
        int size=path.size();
        
        for(int i=size-1;i>=0;i--){
            
            sum+=path[i];
            
            if(sum==k)count++;
            
        }
        
        path.pop_back();
        
    }
    
    int sumK(Node *root,int k)
    {
        // code here
        
        vector<int>path;
        
        int count=0;
        
        solve(root,count,path,k);
        
        return count;
        
    }
};