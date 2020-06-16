/*

Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to tree and returns it.
Note: The structure of tree must be maintained.

Input:
First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the tree as described below: 

    The values in the string are in the order of level order traversal of the tree where, numbers denotes node values, and a character “N” denotes NULL child.

    For example:

    For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N

Output:
The output in the expected output will be the inorder traversal of the returned tree.

Your Task:
The task is to complete two methods serialize() and deSerialize().

Constraints:
1 <= T <= 100
1 <= Number of nodes <= 1000
1 <= Data of a node <= 1000

Example:
Input:
2
1 2 3
10 20 30 40 60
Output:
2 1 3
40 20 60 10 30

Explanation:
Testcase 1: Given tree is 
                           1
                       /         \
                     2           3
Hence , the given output is 2 1 3.
Testcase 2: Given tree is 
                         10
                       /       \
                     20      30
                  /        \
                40      60
Hence, the given output is 40 20 60 10 30.




*/

void serialize(Node *root,vector<int> &A)
{
    if(root == NULL)
    {
        A.push_back(-1);
        return;
    }

    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}


Node* solve(queue<int>& q)
{
    int x = q.front();
    q.pop();
    if(x==-1)
        return NULL;

    Node* root = new Node(x);
    
    root->left = solve(q);
    root->right = solve(q);
    return root;
}

Node * deSerialize(vector<int> &A)
{
    queue<int> q;
    for(auto x:A)
        q.push(x);
    A.clear();
    Node* root = solve(q);
    return root;
}