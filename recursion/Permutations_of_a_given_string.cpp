/*
Given a string S. The task is to print all permutations of a given string.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Constraints:
1 ≤ T ≤ 10
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

Explanation:
Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .
 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r)
{
    if(l == r)  // termination condition
    {
        cout<<s<<" ";
        return;
    }
    
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]); // the value got exchange 
        permute(s,l+1,r);  // permute the rest as well
        swap(s[l],s[i]);  // again exchange the values in order to discard the redundancy 
    }
}

int main()
 {
	//code
	int test;
	cin>>test;
	while(test--)
	{
	    string s;
	    cin>>s;
	    permute(s, 0, s.length()-1);
	    cout<<endl;
	}
	return 0;
}
