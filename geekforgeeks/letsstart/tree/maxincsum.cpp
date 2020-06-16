#include <bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
	return (a>b) ? a:b; 
}
int maxincsum(long long int *arr, int n)
{
   int maxSum=arr[0];
   int temp =arr[0];
   stack <long long int> S;
   
   S.push(arr[0]);
   for (int i=1; i<n; i++)
   {
	   if (arr[i-1]>arr[i])  
	   {
		 while ( (!S.empty()) && (S.top() > arr[i]))
		 {

			 temp -= S.top();
			 S.pop();
		 }
	   }

       temp +=arr[i];
	   S.push(arr[i]);

	   maxSum = max(maxSum, temp);     
	   //i++;
   }

   return maxSum;
}


int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		long long int arr[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];

		cout<<maxincsum(arr,n)<<endl;
	}
	return 0;
}