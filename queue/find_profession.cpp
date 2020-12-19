/*
    ***********************************************************
    ***************IT WILL PRODUCE TLE*************************
    ***********************************************************
Consider a special family of Engineers and Doctors with following rules :

Everybody has two children.
First child of an Engineer is an Engineer and second child is a Doctor.
First child of an Doctor is Doctor and second child is an Engineer.
All generations of Doctors and Engineers start with Engineer.
We can represent the situation using below diagram:

                E
           /        \
          E          D
        /   \       /  \
       E     D     D    E
      / \   / \   / \   / \
     E   D D   E  D  E  E  D
Given level and position of a person in above ancestor tree, find profession of the person.

Examples:

Input : level = 4, pos = 2
Output : Doctor

Input : level = 3, pos = 4
Output : Engineer
Input:

First line of input contains number of test cases T. Each test case will be of one line. Each test case will have two space separated integers. First input represents Generation and second input represents child number.

Output:
Corresponding to each test case you have to print Doctor or Engineer in new line,based on input.

Example:
Input:
2
4 2
3 4

Output:
Doctor
Engineer



*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int find_prof(int r, int c, int x)
{
    // 1 is for Engineer and 2 is for Doctor
    queue<int> q;
    q.push(1);
    q.push(9);
    while(x!=r)
    {
        int temp = q.front();
        q.pop();
        if(temp == 1)
        {
            q.push(1);
            q.push(2);
            //q.pop();
        }
        if(temp == 2)
        {
            q.push(2);
            q.push(1);
            //q.pop();
        }
        if(temp == 9)
        {
            x++;
            //q.pop();
            q.push(9);
        }
    }
    int t = 1;
    while(1)
    {
        if(t++ == c)
            return q.front();
        q.pop();
    }
}

int main()
 {
	//code
	int test;
	cin>>test;
	while(test--)
    {
        int r, c;
        cin>>r>>c;
        if(r == 1)
            cout<< "Engineer"<<endl;
        else
        {
            int pro = find_prof(r, c, 1);
            if(pro == 1)
                cout<<"Engineer"<<endl;
            if(pro == 2)
                cout<< "Doctor"<<endl;
        }
 }
	return 0;
}
