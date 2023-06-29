//Sum Tree
//Link:-https://practice.geeksforgeeks.org/problems/sum-tree/1

class Solution
{
    public:
    
    pair<bool,int>isSumTreeFast(Node *root){
        
        if(root==NULL){
            
            pair<bool,int>p=make_pair(true,0);
            return p;
            
        }
        
        if(root->left==NULL && root->right==NULL){
            
            pair<bool,int>p=make_pair(true,root->data);
            return p;
            
        }
        
        pair<bool,int>left=isSumTreeFast(root->left);
        pair<bool,int>right=isSumTreeFast(root->right);
        
        bool leftAns=left.first;
        bool rightAns=right.first;
        
        bool sum=root->data==left.second+right.second;
        
        pair<bool,int>ans;
        
        if(leftAns && rightAns && sum){
            
            ans.first=true;
            ans.second=2*root->data;
            
        }
        
        else{
            
            ans.first=false;
            
        }
        
        return ans;
        
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         
         return isSumTreeFast(root).first;
         
    }
};