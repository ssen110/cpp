#include<iostream>
#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int countTheTriplet(int *a,int n)
{
	sort(a,a+n);
	int j,k,c=0;
	for(int i=0;i<n-2;i++)
	{
		j=i+1;
		k=j+1;
		while(k<n)
		{
			if(a[i]+a[j]==a[k])
			{
				c++;
				j++;
			}
			else if(a[i]+a[j]<a[k])
			{
				j++;
				k--;
			}

			k++;
		}
	}
	if(c==0)
		return -1;
	else
		return c;

}

int main()
{
	int testcases;
	cin>>testcases;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<countTheTriplet(a,n)<<endl;
	}
	return 0;
}