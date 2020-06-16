/*
Given two arrays X and Y of positive integers, find number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test consists of three lines. The first line of each test case consists of two space separated M and N denoting size of arrays X and Y respectively. The second line of each test case contains M space separated integers denoting the elements of array X. The third line of each test case contains N space separated integers denoting elements of array Y.

Output:
Corresponding to each test case, print in a new line, the number of pairs such that xy > yx.

Constraints:
1 ≤ T ≤ 100
1 ≤ M, N ≤ 105
1 ≤ X[i], Y[i] ≤ 103

Example:
Input
1
3 2
2 1 6
1 5

Output
3

Explanation:
Testcase 1: The pairs which follow xy > yx are as such: 21 > 12,  25 > 52 and 61 > 16  
*/
#include<bits/stdc++.h>

#include<math.h>

using namespace std;

int greaterthanX(int x, int Y[], int N, int countofY[])
{
	if(x==0)
		return 0;
	if(x==1)
		return countofY[0];

	int* idx= upper_bound(Y,Y+N,x);
	int count=(Y+N) - idx;

	count=count + countofY[0] + countofY[1];

	if(x==2)
		count= count - (countofY[3] + countofY[4]);
	if(x==3)
		count = count + countofY[2];

	return count;
}


int countno(int X[],int Y[],int M,int N)
{
	int countofY[5]={0};
	
	sort(Y,Y+N);
	
	for(int i=0;i<N;i++)
		if(Y[i]<5)
		    countofY[Y[i]]++;

	int totalcount=0;

	for(int i=0;i<M;i++)
		totalcount = totalcount + greaterthanX(X[i],Y,N,countofY);
 	
 	return totalcount;

}
int main()
{
	int testcases ;
	cin>>testcases;
	while(testcases--)
	{
		int M, N,i,j;
		//cout<<"\n enter the size of the two array :\t";
		cin>>M>>N;
		int X[M],Y[N];
		//cout<<"\n enter array elements one by one :\n";
		for(i=0;i<M;i++)
			cin>>X[i];
		for (j = 0; j < N; j++)
			cin>>Y[j];

		int total=countno(X,Y,M,N);
		//cout<<"\n the total count  :"<<total;
		cout<<total;

	}
	return 0;
}
