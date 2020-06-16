#include <bits/stdc++.h>

using namespace std;

int compfunc(string A, string B)
{
	string AB = A+B;
	string BA = B+A;
	return AB>BA?1:0;
}
int main()
{	
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int size,x;
        cin>>size;
        string arr[size];
        for (int i = 0; i < size; ++i)
        {
        	cin>>x;
        	arr[i] = to_string(x);
        }
        sort(arr, arr+size,compfunc);
        for (int i = 0; i < size;i++)
        	cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
