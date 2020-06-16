/*
Generate all prime numbers between two given numbers.

Input:

The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing two space separated integers m and n.
Output:

For every test case print all prime numbers p such that m <= p <= n, space separated. Separate the answers for each test case by a new line.

Constraints:
1<=T<=60
1 <= m <= n <= 100000,
n - m <= 100000

Example:

Input:

2

1 10

3 5

Output:

2 3 5 7

3 5
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int m,n;
	    cin>>m>>n;
	    while(m<=n)
	    {
	        int flag=0;
	        if(m==1)
	            flag=1;
	        else
	        {
	            for(int i=2;i<m;i++)
	                if(m%i==0)
	                {
	                    flag=1;
	                    break;
	                }
	        }
	        if(flag==0)
	            cout<<m<<" ";
	        m++;
	    }
	    cout<<endl;
	}
	return 0;
}
