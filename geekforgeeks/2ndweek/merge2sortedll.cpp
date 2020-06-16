/*
Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
Note: It is strongly recommended to do merging in-place using O(1) extra space.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains N and M, and next two line contains N and M sorted elements in two lines for each.

Output:
For each testcase, print the merged list in sorted form.

User Task:
The task is to complete the function sortedMerge() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.

Constraints:
1 <= T <= 200
1 <= N, M <= 103
1 <= Node's data <= 103

Example:
Input:
2
4 3
5 10 15 40 
2 3 20
2 2
1 1
2 4 
Output:
2 3 5 10 15 20 40
1 1 2 4

Explanation:
Testcase 1: After merging the two linked lists, we have merged list as 2, 3, 5, 10, 15, 20, 40.
Testcase 2: After merging the given two linked list , we have 1, 1, 2, 4 as output.
*/
Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    if(head1==NULL && head2==NULL)
        return NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    
    struct Node* newhead;
    if(head1->data<head2->data)
    {
        newhead=head1;
        newhead->next=sortedMerge(head1->next,head2);
    }
    else
    {
        newhead=head2;
        newhead->next=sortedMerge(head1,head2->next);
    }
    return newhead;
}
