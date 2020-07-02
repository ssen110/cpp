/*

Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.
Input:
The first line of input contains an integer N denoting the number of elements in the stream. Then the next N lines contains integer x denoting the number to be inserted into the stream.
Output:
For each element added to the stream print the floor of the new median in a new line.
 
Constraints:
1 <= N <= 106
1 <= x <= 106
 
Example:
Input:
4
5
15
1 
3
Output:
5
10
5
4
 
Explanation:
Testcase 1:
Flow in stream : 5, 15, 1, 3
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5, 15)
1 goes to stream --> median 5 (5, 15, 1)
3 goes to stream --> median 4 (5, 15, 1, 3)
 


*/
#include <bits/stdc++.h>

using namespace std;

priority_queue <int> small; // max heap
priority_queue <int,vector<int>,greater<int>> large;  // min heap

void createHeap( int n)
{ 
	if(small.empty() || small.top() > n)
		small.push(n);
	else
		large.push(n);
}
void reBalance()
{
	if(small.size() == large.size())
		return;
	else
	{
		if(small.size()>large.size())
		{
			int temp = small.top();
			small.pop();
			large.push(temp); 
		}
		else
		{
			int temp = large.top();
			large.pop();
			small.push(temp); 
		}	
	}
}
int extractMedian()
{
	if(small.size() == large.size())
		return (small.top() + large.top()) / 2;
	else if(small.size()>large.size())
		return small.top();
	else
		return large.top();
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		createHeap(arr[i]);
		reBalance();
		cout<<extractMedian()<<endl;
	}

	return 0;
}
