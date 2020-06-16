#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string S1,S2;
		cin>>S1;
		cin>>S2;
		char c;
		unordered_map<char , int > m;
		int i=0;
		int flag=0;
		for(i=0;i<S2.length();i++)
        	m[S2[i]]=1;
    	for(i=0;i<S1.length();i++)
    	{
        	if(m.find(S1[i])!=m.end())
        	{
        		cout<<S1[i]<<endl;
        		flag=1;
        		break;
        	}
    	}
		if(flag==0)
			cout<<'$'<<endl;
	}

	return 0;
}
