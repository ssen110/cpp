#include <bits/stdc++.h>

using namespace std;

void calculatePoly(int *arr1,int *arr2,int x,int y)
{
	int len = (x+y)-1;
	int ans[len]={0};

	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			int temp;
			temp=arr1[i]*arr2[j];

			ans[i+j]=ans[i+j]+temp;
		}
	}
	cout<<"\n ans\n";
	for(int i=0;i<len;i++)
		cout<<ans[i]<<" ";

	cout<<endl;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int x,y;
		cout<<"\n enter the length of the poly:"<<endl;
		cin>>x>>y;

		int arr1[x],arr2[y];

		cout<<"\nenter the elements one by one\n";
		for(int i=0;i<x;i++)
			cin>>arr1[i];

		for(int i=0;i<y;i++)
			cin>>arr2[i];

		calculatePoly(arr1,arr2,x,y);
	}
	return 0;
}
