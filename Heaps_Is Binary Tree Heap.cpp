//Is Binary Tree Heap
//Link:-https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

class Solution {
  public:
    
    int totalCount(struct Node *root){
        
        if(root==NULL)return 0;
        
        int count=1+totalCount(root->left)+totalCount(root->right);
        
        return count;
        
    }
    
    bool isCBT(struct Node *root,int index,int cnt){
        
        if(root==NULL)return true;
        
        if(index>=cnt)return false;
        
        else{
            
            bool left=isCBT(root->left,2*index+1,cnt);
            bool right=isCBT(root->right,2*index+2,cnt);
            
            return (left && right);
            
        }
        
    }
    
    bool isMaxHeap(struct Node *root){
        
        if(root==NULL)return true;
        
        if(root->left==NULL && root->right==NULL)return true;
        
        if(root->right==NULL)return (root->data>root->left->data);
        
        else{
            
            return (root->data>root->left->data) && (root->data>root->right->data) && isMaxHeap(root->left) && isMaxHeap(root->right);
            
        }
        
    }
    
    bool isHeap(struct Node* tree) {
        // code here
        
        int index=0;
        int totalCnt=totalCount(tree);
        
        if(isCBT(tree,index,totalCnt) && isMaxHeap(tree)){
            
            return true;
            
        }
        
        else return false;
        
    }
};