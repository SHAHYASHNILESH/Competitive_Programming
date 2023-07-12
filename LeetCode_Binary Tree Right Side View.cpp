//199. Binary Tree Right Side View
//Link:-https://leetcode.com/problems/binary-tree-right-side-view/description/?envType=study-plan-v2&envId=leetcode-75

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
    void solve(TreeNode* root,vector<int>&ans,int level){

        if(root==NULL)return;

        if(level==ans.size()){

            ans.push_back(root->val);

        }

        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);

    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>ans;

        solve(root,ans,0);

        return ans;

    }
};