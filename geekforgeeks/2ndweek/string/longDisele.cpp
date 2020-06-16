#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void longDischar(string s)
{
    int max=0;
    int i=0;
    int len=0;
    int temp=0;

    while(s[i++])
    	len++;
   	//cout<<len;
    for(int i=0;i<len;i++)
    	for(int j=0;j<i;j++)
    	{
    		if(s[i]==s[j])
    		{
    			temp=i-j-1;
    			if(temp>max)
    				max=temp;
    		}
    	}
    cout<<max;
}

int main() {
	//code
	int test;
	cin>>test;
	while(test--)
	{
	    string s;
	    cin>>s;
	    longDischar(s);
	    cout<<endl;
	}
	return 0;
}
