/*
Connect Nodes at Same Level:::



Given a binary tree, connect the nodes that are at same level.Structure of the given Binary Tree node is like following.
struct Node
{
      int data;
      Node* left;
      Node* right;
      Node* nextRight;
}

Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.
       10                       10 ------> NULL
      / \                       /      \
     3   5       =>     3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2          4 --> 1 -----> 2 -------> NULL

Input:
First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the tree as described below: 

    The values in the string are in the order of level order traversal of the tree where, numbers denotes node values, and a character “N” denotes NULL child.

    For example:

    For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N

Output:
For each testcase, in a new line, print the level order and inorder traversals.

Your Task:
You don't have to take input. Complete the function connect() that takes node as parameter and connects the nodes at same level. The printing is done by the driver code.

Constraints:
1 <= T <= 100
1 <= Number of nodes <= 100
1 <= Data of a node <= 1000

Example:
Input:
2
3 1 2
10 20 30 40 60
Output:
3 1 2
1 3 2
10 20 30 40 60
40 20 60 10 30

Explanation:
Testcase1: The connected tree is
        3 ------> NULL
     /      \
   1 -----> 2 ------ NULL
Testcase2: The connected tree is
                           10 ----------> NULL
                        /        \
                     20 ------> 30 -------> NULL
                  /       \
               40 ----> 60 ----------> NULL
 




*/
void connect(Node *p)
{
   if(p==NULL)
    return;
   
   queue<Node *> q;
   q.push(p);
   
   while(!q.empty())
   {
       int size= q.size();
       Node *prev= NULL;
       while(size--)
       {
            Node *temp= q.front();
            q.pop();
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
                
            if(prev!=NULL)
                prev->nextRight=temp;
            
            prev=temp;
            
       }
       prev->nextRight=NULL;
   }
}
