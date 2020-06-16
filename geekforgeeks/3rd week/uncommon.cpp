/*
Find and print the uncommon characters of the two given strings S1 and S2. Here uncommon character means that either the character is present in one string or it is present in other string but not in both. The strings contains only lowercase characters and can contain duplicates.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two strings in two subsequent lines.

Output:
For each testcase, in a new line, print the uncommon characters of the two given strings in sorted order.

Constraints:
1 <= T <= 100
1 <= |S1|, |S2| <= 105

Example:
Input:
1
characters
alphabets
Output:
bclpr
*/

#include <iostream>
#include <unordered_map>
#include <set>
//#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    string S1,S2;
	    cin>>S1;
	    cin>>S2;
	    
	    unordered_map<char,int> mp1,mp2;
	    set <char> s;
	    for(int i=0;i<S1.size();i++)
	        mp1[S1[i]]=1;
	    
	    for(int i=0;i<S2.size();i++)
	        mp2[S2[i]]=1;
	    
	    
	    for(int i=0;i<S2.size();i++)
	    {
	        if(mp2.find(S2[i])!=mp1.end())
	            mp1[S2[i]]=0;
	    }
	    for(int i=0;i<S1.size();i++)
	    {
	        if(mp1.find(S1[i])!=mp2.end())
	            mp2[S1[i]]=0;
	    }
	    
	    unordered_map<char , int> :: iterator it;
	    for(it=mp1.begin();it!=mp1.end();it++)
	    {
	        if(it->second==1)
	            s.insert(it->first);
	    }
	    for(it=mp2.begin();it!=mp2.end();it++)
	    {
	        if(it->second==1)
	            s.insert(it->first);
	    }
	    for(char x:s)
		    cout<<x;
	cout<<endl;
	}
	return 0;
}
