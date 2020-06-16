// height of a binary tree


int height(Node* node)
{
   // Your code here
   if(node == NULL)
        return 0;
    else
    {
        int llmax=height(node -> left);
        int lrmax=height(node -> right);
        if(llmax>=lrmax)
            return llmax+1;
        else
            return lrmax+1;
        
    }
}