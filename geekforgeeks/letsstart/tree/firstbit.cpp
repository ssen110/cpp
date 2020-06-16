/*
Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number. If there is no set bit print "0".

Constraints:
1 <= T <= 200
0 <= N <= 106

Example:
Input:
2
18
12

Output:
2
3

Explanation:
Testcase 1: Binary representation of the 18 is 010010, the first set bit from the right side is at position 2.

*/
#include<bits/stdc++.h>

using namespace std;

int firstbit(int n)
{
    int first=1;

    if(n==0)
        return 0;
    else
    {
        while (n!=0)
        {
            int m=n%2;
            if(m!=0)
                break;
            else
            {
                first++;
            }   
            n=n>>1;
        }
    }  
    return first;
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int number;
        cin>>number;
        cout << firstbit(number)<<endl;
    } 
    return 0;
}
