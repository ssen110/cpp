#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
	int tn;
	cout<<"\n No of test cases :\t";
	cin>>tn;
	int tn1=1;
	while(tn1<=tn)
	{
		int sum1=0;
		int n,sum;
		int arr[MAX];
		int flag=0;
		int initial=0;
		cin>>n;
		cin>>sum;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		for(int i=0;i<n;i++)
		{
			sum1=sum1+arr[i];
			while(sum1>sum)
			{
				sum1= sum1 - arr[initial];
				initial++;
			}

			if(sum1 == sum)
			{
				cout<<initial+1<<"   "<<i+1;
				flag=1;
				break;
			}

		}
		if(flag==0)
			cout<<-1;
		
		tn1++;
	}

	return 0;
}

