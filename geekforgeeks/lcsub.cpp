#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int LongestCommonSubsequence(string A, string B,int M, int N)
{

	int ANS[M+1][N+1];

	for(int i=0;i<=M;i++)
	{
		for(int j=0;j<=N;j++)
		{
			if(i==0 || j==0)
				ANS[i][i]=0;

			else if(A[i-1]==B[j-1])
				ANS[i][j]=ANS[i-1][j-1]+1;
			else
				ANS[i][j]=max(ANS[i-1][j],ANS[i][j-1]);
		}
	}
	return ANS[M][N];
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string A,B;
		int M,N;
		cin>>M>>N;
		//cout<<"\nenter the two strings one by one :";
		cin>>A>>B;

		int lcs=LongestCommonSubsequence(A,B,M,N);
		//cout<<"\nthe lcs:";
		cout<<lcs<<endl;
	}
	return 0;
}
