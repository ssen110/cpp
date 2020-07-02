/*

Given a string S with repeated characters (only lowercase). The task is to rearrange characters in a string such that no two adjacent characters are same.

Note : It may be assumed that the string has only lowercase English alphabets.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a single line containing a string of lowercase english alphabets.

Output:
For each test case in a new line print "1" (without quotes) if the generated string doesn't contains any same adjacent characters, else if no such string is possible to be made print "0" (without quotes).

Constraints:
1 <= T <= 100
1 <= length of string <= 104

Example:
Input:
3
geeksforgeeks
bbbabaaacd
bbbbb

Output:
1
1
0

Explanation:
Testcase 1: All the repeated characters of the given string can be rearranged so that no adjacent characters in the string is equal.
Testcase 3: Repeated characters in the string cannot be rearranged such that there should not be any adjacent repeated character.
 


*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearr(string s)
{

	int max=0;
	map <char,int> mp;
	for(int i=0;i<s.size();++i)
	{
	    mp[s[i]]++;
	    if(max<mp[s[i]])
	       max=mp[s[i]];
	}    
	if((s.size()-max) >= max-1)
	   cout<<1<<endl;
	else
	    cout<<0<<endl;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string S;
		cin>>S ;
		rearr(S);
	}
	return 0;
}