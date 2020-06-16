/*
Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

Output:
Print the inversion count of array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

Example:
Input:
1
5
2 4 1 3 5

Output:
3

Explanation:
Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).


*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll Merge(ll arr[],int s,int mid,int e)
{
    
    int i=s;int j=mid+1;
    int k=s;ll temp[s+e];
     ll count=0;
    while(i<=mid && j<=e)
    {
        if(arr[i]>arr[j])
        {
            count+=mid-i+1;
            temp[k++]=arr[j++];
        }
        else
           temp[k++]=arr[i++];
    }
    
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=e)
        temp[k++]=arr[j++];
    
    for(int i=s;i<=e;i++)
        arr[i]=temp[i];
    
    return count;
}

void MergeSort(ll arr[],ll &sum,int s,int e)
{
    
    if(s<e)
    {
        int mid=(s+e)/2;
        MergeSort(arr,sum,s,mid);
        MergeSort(arr,sum,mid+1,e);
        sum+=Merge(arr,s,mid,e);
    }
}


int main() 
{
  
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int size;
        cin>>size;
        long long int arr[size];
        for(int i=0;i<n;i++)
             cin>>arr[i];
        ll sum=0;
        MergeSort(arr,sum,0,n-1);
        cout<<sum<<endl;
    }
    return 0;
}