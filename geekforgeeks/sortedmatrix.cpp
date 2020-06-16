#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int size;
		cout<<"\n enter the value of the size :";
		cin>>size;
		int temp=size*size;
		int arr[temp];
		int sorted[size][size];
		cout<<"\n enter the array elements :";
		for(int i=0;i<temp;i++)
			cin>>arr[i];
		sort(arr,arr+temp);
		int k=0;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				sorted[i][j]=arr[k++];
			}
		}
		
		cout<<"\n the array is \n";
		for(int i=0;i<size;i++)
			for(int j=0;j<size;j++)
				cout<<sorted[i][j]<<" ";
	}
	return 0;
}
