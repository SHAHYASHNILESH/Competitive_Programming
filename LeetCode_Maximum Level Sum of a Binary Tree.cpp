//1161. Maximum Level Sum of a Binary Tree
//Link:-https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

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
    int maxLevelSum(TreeNode* root) {
        
        if(root==NULL)return 0;

        int maxSum=root->val;
        int maxLevel=1;
        int level=1;

        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){

            int size=q.size();
            int currSum=0;

            for(int i=0;i<size;i++){

                TreeNode*node=q.front();
                q.pop();

                currSum+=node->val;

                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);

            }

            if(currSum>maxSum){

                maxSum=currSum;
                maxLevel=level;

            }

            level++;

        }

        return maxLevel;

    }
};