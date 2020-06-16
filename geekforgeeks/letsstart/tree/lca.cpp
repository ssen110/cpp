// LCA of BST  complexity : O(logN)

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   
   Node *temp=root;
    if(temp==NULL)
        return NULL;
    else
    {
        if(temp->data > n1 && temp->data>n2)
            LCA(temp->left,n1,n2);
        else if(temp->data < n1 && temp->data<n2)
            LCA(temp->right,n1,n2);
        else
            return temp;
    }   
}
// LCA of binary tree   complexity : O(N)

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)
    return NULL;
   if(root->data==n1 || root->data==n2)
    return root;
   Node *temp=root;
   Node *lefts,*rights;
   
   lefts=LCA(temp->left,n1,n2);
   rights=LCA(temp->right,n1,n2);
   
   if(lefts !=NULL && rights!=NULL)
      return temp;
   else
   {
       return lefts? lefts:rights;
   }
   
}



