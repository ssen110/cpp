/*

Complete the function to print spiral order traversal of a tree. For below tree, function should print 1, 2, 3, 4, 5, 6, 7.
Input:
First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the tree as described below: 

    The values in the string are in the order of level order traversal of the tree where, numbers denotes node values, and a character “N” denotes NULL child.

    For example:

    For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N

Output:
The function should print level order traversal in spiral form.

Your Task:
The task is to complete the function printSpiral() which prints the elements in spiral form of level order traversal. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= T <= 30
0 <= Number of nodes <= 105
1 <= Data of a node <= 105

Example:
Input:
2
1 3 2  
10 20 30 40 60 
Output:
1 3 2
10 20 30 60 40 

Explanation:
Testcase1: The tree is
        1
     /      \
   3       2
So, the spiral level order would be 1 3 2
Testcase2: The tree is
                           10
                        /        \
                     20         30
                  /       \
               40       60
So, the spiral level order would be 10 20 30 60 40
 

*/
void printSpiral(Node *root)
{
    //Your code here
    stack <Node*> S1,S2;
    Node * temp=root;
    if(temp==NULL)
        return;
    
    S1.push(temp);
    while(!S1.empty() || !S2.empty())
    {
        while(!S1.empty())
        {
            Node* p=S1.top();
            cout<<p->data<<" ";
            S1.pop();
            if(p->right)
                S2.push(p->right);
            if(p->left)
                S2.push(p->left);
        }
        while(!S2.empty())
        {
            Node* p=S2.top();
            cout<<p->data<<" ";
            S2.pop();
            if(p->left)
                S1.push(p->left);
            if(p->right)
                S1.push(p->right);
        }
    }
}

