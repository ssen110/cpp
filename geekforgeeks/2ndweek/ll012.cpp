/*
Given a linked list of N nodes where nodes can contain values 0s, 1s and 2s only. The task is to segregate 0s, 1s and 2s linked list such that all zeros segregate to headside, 2s at the end of the linked list and 1s in the mid of 0s and 2s.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains N elements as the data in the linked list.

Output:
For each testcase, segregate the 0s, 1s and 2s and display the linked list.

Your Task:
The task is to complete the function segregate() which segregate the nodes in the linked list as asked in the problem statement. The printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= N <= 103

User Task:
The task is to complete the function sortList() which takes head reference as the argument and returns void.

Example:
Input:
2
8
1 2 2 1 2 0 2 2
4
2 2 0 1
Output:
0 1 1 2 2 2 2 2
0 1 2 2

Explanation:
Testcase 1: All the 0s are segregated to left end of the linked list, 2s to the right end of the list and 1s in between.
Testcase 2: After arranging all the 0s,1s and 2s in the given format , output will be 0 1 2 2.
*/
Node* segregate(Node *head) {
    
    // Add code here
    Node *temp=head;
    int t0=0,t1=0,t2=0;
    while(temp)
    {
        if(temp->data==0)
            t0++;
        if(temp->data==1)
            t1++;
        if(temp->data==2)
            t2++;
        temp=temp->next;
    }
    Node *t=head;
    //cout<<t0<<" "<<t1<<" "<<t2<<endl;
    while(t0 || t1 || t2)
    {
        if(t0)
        {
            t->data=0;
            t=t->next;
            t0--;
            continue;
        }
        if(t1)
        {
            t->data=1;
            t=t->next;
            t1--;
            continue;
        }
        if(t2)
        {
            t->data=2;
            t=t->next;
            t2--;
            continue;
        }
    }
    return head;
}
