/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index ).

NOTE: Required Time Complexity O(n2).

Input:
The first line of input consists number of the testcases. The following T lines consist of a string each.

Output:
In each separate line print the longest palindrome of the string given in the respective test case.

Constraints:
1 ≤ T ≤ 100
1 ≤ Str Length ≤ 104

Example:
Input:
1
aaaabbaa

Output:
aabbaa

Explanation:
Testcase 1: The longest palindrome string present in the given string is "aabbaa". 

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printString(string str, int low, int high)  
{  
    for( int i = low; i <= high; ++i )  
        cout << str[i];  
    cout<<endl;
}  

void CountMaxPal( string str)
{
	int start=0;
	int maxlength=1;
	int len=0 ;
	int high,low;
	int i=0;
	while(str[i])
	{
		len++;
		i++;
	}
	//cout<<len<<endl;
	for(i=1;i<len;i++)
	{
		low=i-1;
		high=i;
		while(low>=0 && high<len && str[low]==str[high])  // even length palindrom
		{
			if (high - low + 1 > maxlength) 
			{
				start=low;
				maxlength=high-low+1;
			}
			low--;
			high++;
		}

		low=i-1;
		high=i+1;
		while(low>=0 && high<len && str[low]==str[high])  // odd lenght palindrom 
		{
			if (high - low + 1 > maxlength) 
			{
				start=low;
				maxlength=high-low+1;
			}
			low--;
			high++;
		}
	}
	printString(str,start,start+maxlength-1);
}

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string str;
		cin>>str;
		CountMaxPal(str);	    
	}
	return 0;
}
