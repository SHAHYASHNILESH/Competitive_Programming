//Normal BST To Balanced BST
//Link:-https://www.codingninjas.com/codestudio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0

/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/

void inorder(TreeNode<int>* root,vector<int>&in){

    if(root==NULL)return;

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right, in);

}

TreeNode<int>* inorderToBST(int s,int e,vector<int>&in){

    if(s>e)return NULL;

    int mid=(s+e)/2;

    TreeNode<int>*root=new TreeNode<int>(in[mid]);

    root->left=inorderToBST(s,mid-1,in);
    root->right=inorderToBST(mid+1,e,in);

    return root;

}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.

    vector<int>inorderVal;
    
    //We get elements in sorted order on inorder traversal
    inorder(root,inorderVal);

    return inorderToBST(0,inorderVal.size()-1,inorderVal);

}
