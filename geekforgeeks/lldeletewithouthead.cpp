/*Delete without head pointer */

void deleteNode(Node *node)
{
   // Your code here
   Node *temp;
   if(node == NULL)
       return ;
   else
   {
     while(node->next !=NULL)
     {
          node->data = node->next->data;
          temp=node;
          node=node->next;
     }
     free(temp->next);
     temp->next=NULL;
   }
}