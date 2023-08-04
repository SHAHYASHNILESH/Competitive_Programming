//BST To MinHeap
//Link:-https://www.geeksforgeeks.org/convert-bst-min-heap/

void inorder(BinaryTreeNode* root, vector<int> &inorderArr){

	if(root == NULL){
	    
		return ;
		
	}

	inorder(root->left, inorderArr);
	inorderArr.push_back(root->data);
	inorder(root->right, inorderArr);
	
}


void fillPreOrder(BinaryTreeNode*&root,vector<int> inorderArr, int &index){

	
	if(root== NULL){
	    
		return;
		
	}

	root->data = inorderArr[index++];
	
	fillPreOrder(root->left, inorderArr, index);
	fillPreOrder(root->right, inorderArr, index);

}

BinaryTreeNode* convertBST(BinaryTreeNode* root){
    
	vector<int> inorderArr;
	int i=0;
	
	inorder(root, inorderArr);
	
	fillPreOrder(root, inorderArr, i);

	return root;

}