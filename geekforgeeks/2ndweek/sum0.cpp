#include<bits/stdc++.h>

using namespace std;

void countSum0(int *arr,int n)
{
	int count=0;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		temp=0;
		for(int j=i;j<n;j++)
		{
			temp=temp+arr[j];
			if(temp==0)
			{
				count++;
				continue;
			}
		}
	}

	cout<<count<<endl;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		countSum0(arr,size);
	}
	return 0;
}
