/*

	Check weather the tree is BST or not 

*/




int BSTUtil(Node*node, int min, int max) {
   if (node==NULL)
      return 1;
   if (node->data< min || node->data > max)
      return 0;
   return BSTUtil(node->left, min, node->data - 1) && BSTUtil(node->right, node->data + 1, max);
}
bool isBST(Node* root) {
    // Your code here
    return(BSTUtil(root, INT_MIN, INT_MAX));
}
