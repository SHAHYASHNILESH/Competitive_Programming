//Find K-th smallest Element in BST
//Link:-https://www.codingninjas.com/codestudio/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=0

#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int solve(BinaryTreeNode<int>* root,int &i,int k){

    if(root==NULL)return -1;

    int left=solve(root->left,i,k);

    if(left!=-1){

        return left;

    }

    i++;
    if(i==k){

        return root->data;
    
    }

    return solve(root->right,i,k);

}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.

    int i=0;
    int ans=solve(root,i,k);

    return ans;

}