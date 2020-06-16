#include <bits/stdc++.h>

using namespace std;

void recAdjDup(string s)
{
	int i=0;
	int len=0;
	while(s[i++]!='\0')
		len++;
	cout<<len<<endl;
	i=0;
	while(s[i++]=='\0')
	{
		if(i==0)
		{
			if(s[i]==s[i+1])
				continue;
			else
				cout<<s[i];
		}
		else if(i==len-1)
		{
			if(s[i]==s[i-1])
				continue;
			else
				cout<<s[i];
		}
		else
		{
			if(s[i]==s[i-1] || s[i]==s[i+1])
				continue;
			else
				cout<<s[i];
		}
	}
	cout<<endl;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string s;
		cin>>s;
		recAdjDup(s);
	}
	return 0;
}
