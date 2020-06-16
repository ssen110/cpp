/*
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”

Input:
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.

Output:
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced

*/
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

bool balanced(string expr)
{
	stack<char> s; 
    char x; 
 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            s.push(expr[i]); 
            continue; 
        } 
        if (s.empty()) 
          return false; 

  		if (expr[i]==')'||expr[i]==']'||expr[i]=='}')
  		{ 
        switch (expr[i]) 
        { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x != '(') 
                return false; 
            break; 
  
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x!='{') 
                return false; 
            break; 
  
        case ']': 
            x = s.top(); 
            s.pop(); 
            if (x !='[') 
                return false; 
            break; 
        }
        } 
    } 
    return (s.empty()); 
}


int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string expression;
		cin>>expression;

		bool flag = balanced(expression);

		if(flag==false)
			cout<<"not balanced\n";
		else
			cout<<"balanced\n";
	}
	return 0;
}