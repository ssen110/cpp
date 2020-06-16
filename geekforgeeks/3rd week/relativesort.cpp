#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	while(testcases--)
	{
	    int size1, size2;
	    cin >> size1 >> size2;
	    int arr1[size1];
	    int arr2[size2];
	    unordered_map<int, int> mp;
	    unordered_map<int, int>::iterator it;
	    vector<int> V;
	    
	    for(int i = 0;i<size1;i++)
	        cin >> arr1[i];
	    for(int i = 0;i<size2;i++)
	        cin >> arr2[i];
	    for(int i=0;i<size1;i++)
	        mp[arr1[i]]++;
	    for(int i = 0;i<size2;i++)
	    {
	        if(mp.find(arr2[i])!=mp.end())
	        {
	            while(mp[arr2[i]]>0)
	            {
	                cout << arr2[i] << " ";
	                mp[arr2[i]]--;
	            }
	            mp.erase(arr2[i]);
	        }
	    }
	    for(it = mp.begin();it!=mp.end();it++)
	    {
	        while((it->second)-- != 0)
	            //cout << it->first << " ";
	        {
	            V.push_back(it->first);
	        }
	        
	    }
	    sort(V.begin(),V.end());
	    for(int x:V)
	        cout<<x<<" ";
	    cout << endl;
	}
	return 0;
}