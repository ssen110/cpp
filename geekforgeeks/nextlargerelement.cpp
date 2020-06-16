/*
Given an array A of size N having distinct elements, the task is to find the next 
greater element for each element of the array in order of their appearance in the array. 
If no such element exists, output -1 

Input:
The first line of input contains a single integer T denoting the number of test cases.
Then T test cases follow. Each test case consists of two lines. 
The first line contains an integer N denoting the size of the array. 
The Second line of each test case contains N space separated positive integers denoting the values/elements in the array 


Output:
For each test case, print in a new line, the next greater element for each array element separated by space in order.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1018
Example:
Input
2
4
1 3 2 4
4
4 3 2 1
Output
3 4 4 -1
-1 -1 -1 -1

Explanation:
Testcase1: In the array, the next larger element to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? since it doesn't exist hence -1.*/
using namespace std;
#define mod 1000000007


int main()
 {
	int t ;
	cin >> t ;
	while(t--){
	    long long int n , i , index ;
	    cin >> n ;
	    long long int a[n] , ans[n] ;
	    for(i=0;i<n;i++){
	        cin >> a[i] ;
	    }
	    stack<long long int> stk ;
	    for(i = n-1; i >= 0; i--){
	        while(!stk.empty() && a[i] >= stk.top()){
	            stk.pop() ;
	        }
	        if(stk.empty()){
	            ans[i] = -1 ;
	        }
	        else{
	            ans[i] = stk.top() ;
	        }
	        stk.push(a[i]) ;
	    }
	    
	    for(i=0;i<n;i++){
	        cout << ans[i] << " " ;
	    }
	    cout << endl ;
	}
	
	return 0;
}