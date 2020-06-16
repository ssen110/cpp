#include<bits/stdc++.h>

#define MAX 100

using namespace std ;

int countTriplets(int *a,int n)
{
	sort(a,a+n);
	int i ,j,k;
	int count=0;
	for(i=0;i<n-2;i++)
	{
		j=i+1;
		k=j+1;
		while(k<n)
		{

			if(a[i]+a[j]==a[k])
			{
				j++;
				count++;
			}
			else if(a[i]+a[j]<a[k])
			{
				j++;
				k--;
			}
			k++;
		}
	}
	if(count == 0)
		return -1;
	else
		return count;
}

int main()
{
	int test,arr[MAX];
	cin>>test;
	while(test--)
	{
		int size;
		cin>>size;
		for(int i=0;i<size;i++)
			cin>>arr[i];
		cout<<"\nthe count is : ";
		cout<<countTriplets(arr,size)<<endl;
	}
	return 0;
}