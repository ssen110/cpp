#include<bits/stdc++.h>
#include<iostream>
#define MAX 100
#define MIN -9999
using namespace std;
//1 2 3 -2 5
int CountMAX(int *a,int length)
{
    int sum = MIN;
    int temp = 0;
    for(int i = 0; i < length; i++)
    {
        temp=temp+a[i];
        if(temp>sum)
            sum=temp;
        if(temp<0)
            temp=0;
    }
   return sum;
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
		for(int i=0 ; i< size ;i++)
			cin>>arr[i];
		cout<<CountMAX(arr,size)<<endl;
	}
	return 0;
}
