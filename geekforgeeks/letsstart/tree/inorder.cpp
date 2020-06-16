/*
	Inorder traversal of a tree
*/

vector<int> inOrder(Node* root)
{
    vector<int> v,w;
    if(!root)
        return v;
    v = inOrder(root->left);
    v.push_back(root->data);
    w = inOrder(root->right);
    v.insert(v.end(), w.begin(), w.end());
    return v;
}

