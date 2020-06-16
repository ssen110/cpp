#include <bits/stdc++.h>

using namespace std;

int findkth(int *arr, int n,int element)
{
	sort(arr,arr+n);
	int kth=arr[element-1];
	return kth;
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
		int element;
		cin>>element;
		int kth= findkth(arr,size,element);
		cout<<kth<<endl;
	}
	return 0;
}
