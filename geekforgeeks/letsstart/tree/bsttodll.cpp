
//Binary tree to DLL
// any confusion : https://www.youtube.com/watch?v=FsxTX7-yhOw

void bToDLL(Node *root, Node **head_ref)
{
    // your code here
    if(root==NULL)
        return;
    static Node* prev=NULL;
    
    bToDLL(root->left,head_ref);
    
    if(*head_ref==NULL)
        *head_ref=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    
    bToDLL(root->right,head_ref);
}
