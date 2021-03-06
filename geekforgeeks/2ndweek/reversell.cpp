/*

Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.

Input:
First line of input contains number of testcases T. For each testcase, first line contains length of linked list and next line contains the linked list elements.

Output:
For each testcase, there will be a single line of output which contains the linked list with every k group elements reversed.

User Task:
The task is to complete the function reverse() which should reverse the linked list in group of size k.

Example:
Input:
2
8
1 2 2 4 5 6 7 8
4
5
1 2 3 4 5
3

Output:
4 2 2 1 8 7 6 5
3 2 1 5 4

Explanation:
Testcase 1: Since, k = 4. So, we have to reverse everty group of two elements. Modified linked list is as 4, 2, 2, 1, 8, 7, 6, 5.


*/
struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    struct node *prev=NULL,*nextnode;
    struct node *current=head;
    int count=0;
    if(head==NULL || head->next==NULL || k<=0)
        return head;
    while(current && count<k)
    {
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
        count++;
    }
    head->next = reverse(nextnode, k);  
    return prev;
}
