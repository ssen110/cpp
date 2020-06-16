#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int findMissingNo(int *arr, int n)
{
	//int size=0;
	sort(arr,arr+n);
	int missing;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==i+1)
			continue;
		else
		{
			missing=i+1;
			break;
		}
	}
	return missing;
}

int main(){
	int testcases;
	cout<<"\n enter the no of test cases \t";
	cin>>testcases;
	while(testcases--)
	{
		int size;
		cout<<"\n enter the size of the array :\t";
		cin>>size;
		int arr[size];
		for(int i=0;i<size-1;i++)
			cin>>arr[i];

		int missingNO;
		missingNO=findMissingNo(arr,size-1);
		cout<<"\n the missing no is :"<<missingNO;
	}
	return 0;
}