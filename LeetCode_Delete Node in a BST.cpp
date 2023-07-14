//450. Delete Node in a BST
//Link:-https://leetcode.com/problems/delete-node-in-a-bst/description/?envType=study-plan-v2&envId=leetcode-75

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int inorderPred(TreeNode* root){

        root=root->left;

        while(root->right){

            root=root->right;

        }

        return root->val;

    }

    int inorderSucc(TreeNode* root){

        root=root->right;

        while(root->left){

            root=root->left;

        }

        return root->val;

    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)return NULL;

        if(key>root->val)root->right=deleteNode(root->right,key);

        else if(key<root->val)root->left=deleteNode(root->left,key);

        else{

            if(root->left==NULL && root->right==NULL)root=nullptr;

            else if(root->left){

                root->val=inorderPred(root);
                root->left=deleteNode(root->left,root->val);

            }

            else{

                root->val=inorderSucc(root);
                root->right=deleteNode(root->right,root->val);

            }

        }

        return root;

    }
};