#include <bits/stdc++.h>

using namespace std;

int countnumber(int x)
{
	int count=0;
	while(x>0)
	{
		int n = x%10;
		x=x/10;
		if(n==2)
			count++;
	}
	return count;
}

int main()
{
	int testcases ;
	cin>>testcases;
	while(testcases--)
	{
		int x;
		cout<<"\n enter the value of number";
		cin>>x;

		int count=0;
		for(int i=0;i<=x;i++)
			count += countnumber(i);
		cout<<count<<endl;
	}
	return 0;
}
