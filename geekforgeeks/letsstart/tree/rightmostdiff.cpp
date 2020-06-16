/*
Given two numbers M and N. The task is to find the position of rightmost different bit in binary representation of numbers.

Input:
The input line contains T, denoting the number of testcases. Each testcase follows. First line of each testcase contains two space separated integers M and N.

Output:
For each testcase in new line, print the position of rightmost different bit in binary representation of numbers. If both M and N are same then print -1 in this case.

Constraints:
1 <= T <= 100
1 <= M <= 103
1 <= N <= 103

Example:
Input:
2
11 9
52 4

Output:
2
5

Explanation:
Tescase 1: Binary representaion of the given numbers are: 1011 and 1001, 2nd bit from right is different.
 

*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n1, n2;
	    cin >> n1 >> n2;
	    int x = 0;
	    while(n1>0 || n2>0)
	    {
	        x++;
	        if((n1%2) != (n2%2))
	        {
	            cout << x << endl;
	            break;
	        }     
	        else 
	        {
	            n1=n1/2;
	            n2=n2/2;
	        }
	    }
	}
	return 0;
}