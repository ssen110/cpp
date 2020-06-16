/*

Given an array pre[] that represents Preorder traversal of a binary tree. One more array preLN[] is given which has only two possible values ‘L’ and ‘N’. The value ‘L’ in preLN[] indicates that the corresponding node in Binary Tree is a leaf node and value ‘N’ indicates that the corresponding node is the non-leaf node.

Note: it is a special binary tree where every node has either 0 or 2 children​

Input:
There will be T, test cases and for each test case, the function will be called separately.
The function takes three arguments as input, first, an integer N, denoting the size of both the array, second an array pre[] that represents Preorder traversal of the binary tree and the last argument a character array preLN[] which indicates that the corresponding node in Binary Tree is a leaf node or a normal node.

Output:
The output will be the inorder traversal of the resultant tree.

User Task:
Your task is to complete the function constructTree(), that constructs the tree from the given two arrays and return the root pointer to new binary tree formed.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <=T <= 100
1 <= N <= 100
1 <= pre[i] <= 100
preLN[i]: {'N', 'L'}

Example:
Input:
3
5
10 30 20 5 15 
N N L L L 
4
1 2 4 3 
N N L L 
6
1 2 4 6 5 3 
N N N L L L

Output:
20 30 5 10 15 
4 2 3 1 
6 4 5 2 3 1 



*/
{
	int data;
	struct Node *left;
	struct Node *right;
};
// function should return the root of the new binary tree formed
#include<stack>
struct Node* createNode(int data){
    struct Node* temp = new Node(data);
    temp -> left = temp -> right = NULL;
    return temp;
}

struct Node *constructTree(int n, int arr[], char preLN[])
{
    int arrayLen = n;
    // cout <<"arraylen" <<arrayLen <<endl;
    stack<struct Node*> nonLeaves;
    int i =1;
    struct Node* root = createNode(arr[0]);
    struct Node* temp = root;
    nonLeaves.push(root);
    for (i =1 ; i<n ;i++ )
    {
        
           temp = nonLeaves.top();
            if(preLN[i] == 'N')
            {
                if( temp -> left == NULL)
                {

                    temp -> left = createNode(arr[i]);
                    Node* a = temp -> left;
                    nonLeaves.push(a);
                }
                else
                {
                    temp -> right = createNode( arr[i]);
                    nonLeaves.pop();
                    nonLeaves.push((temp -> right));
                }
                
            }
            else  
            {
                if(temp -> left == NULL)
                {
                    temp ->left = createNode(arr[i]);
                }
                else 
                {
                    temp ->right = createNode(arr[i]);
                    nonLeaves.pop();
                }
            
            }
        
    }
    return root;
    // Code here
}