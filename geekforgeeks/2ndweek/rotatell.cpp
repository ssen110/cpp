/*
Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains linked list elements and last line contains k, by which linked list is to be rotated.

Output:
For each testcase, print the rotated linked list.

User Task:
The task is to complete the function rotate() which takes head reference as the first argument and k as the second argument. The printing is done automatically by the driver code.

Constratints:
1 <= T <= 100
1 <= N <= 103
1 <= k <= 103

Example:
Input:
2
8
1 2 3 4 5 6 7 8
4
5
2 4 7 8 9
3
Output:
5 6 7 8 1 2 3 4
8 9 2 4 7
1 2

Explanation:
Testcase 1: After rotating the linked list by 4 elements (anti-clockwise), we reached to node 5, which is (k+1)th node from beginning, now becomes head and tail of the linked list is joined to the previous head.
Testcase 2: After rotating the linked list by 3 elements (anti-clockwise), we will get the resulting linked list as 8 9 2 4 7.
Testcase 3: Rotation of linked list is not possible and hence , the output will be 1 2.  
*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 
*/
Node* rotate(Node* head, int k) {
    // Your code here
    Node* temp=head;
    while(temp->next)
        temp=temp->next;
    temp->next=head;
    Node* end;
    while(k--)
    {
        end=head;
        head=head->next;
    }
    end->next=NULL;
    return head;
}
