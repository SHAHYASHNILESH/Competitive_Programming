//1448. Count Good Nodes in Binary Tree
//Link:-https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

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

    void countGoodNodes(TreeNode* root,int &count,int maxVal){

        if(root==NULL)return;

        if(root->val>=maxVal){

            count++;
            maxVal=root->val;

        }

        countGoodNodes(root->left,count,maxVal);
        countGoodNodes(root->right,count,maxVal);

    }

    int goodNodes(TreeNode* root) {
        
        int count=0;

        if(root==NULL)return count;

        countGoodNodes(root,count,root->val);

        return count;

    }
};