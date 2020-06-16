#include <iostream>
#include <map>

#define ll long long
using namespace std;

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		ll arr1[n],arr2[n];
		map<ll,ll> mp;

		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
			mp[arr1[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			cin>>arr2[i];
			mp[arr2[i]]--;
		}
		int flag=1;
		
		for(auto it=mp.begin();it!=mp.end();it++)
		{
		    if(it->second > 0)
		    {
		        flag=0;
		        break;
		    }
		}
		cout<<flag<<endl;
		
	}

	return 0;
}