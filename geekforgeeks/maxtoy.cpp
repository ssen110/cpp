/*
Given an array consisting cost of toys. Given an integer K depicting the amount with you. Maximise the number of toys you can have with K amount.

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the number of toys and an integer K depicting the value of K.
Next line is followed by the cost of toys.


Output:

Print the maximum toys in separate line.


Constraints:

1 ≤ T ≤ 30
1 ≤ N ≤ 1000
1 ≤ K ≤ 10000
1 ≤ A[i] ≤ 10000


Example:

Input
1
7 50
1 12 5 111 200 1000 10
Output
4

*/
#include <bits/stdc++.h>

using namespace std;

int maxcountFunc(int *arr,int n, int max)
{
	sort(arr,arr+n);
	int count=0;

	for(int i=0;i<n;i++)
	{
		if(max>=arr[i])
		{
			count++;
			max = max- arr[i];
		}
		else
			break;
	}
	return count;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int nitems,maxval;
		cout<<"\n no of items :";
		cin>>nitems;
		cout<<"\n max val :";
		cin>>maxval;
		cout<<"\n value of toys one by one :\n";

		int arr[nitems];
		for (int i = 0; i < nitems; ++i)
			cin>>arr[i];

		int maxcount = maxcountFunc(arr,nitems,maxval);
		cout<<"\n max value  :";
		cout<<maxcount;
	}
	return 0;
}

