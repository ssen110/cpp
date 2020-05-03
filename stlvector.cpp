/*
	In vectorto use lower_bound()
	upper_bound(), binary_search () we have to sort the vector 
	so , if we dont want that we can use set !
*/
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

bool compf(int x, int y)
{
	/*if(x>=y)
		return true;
	else
		return false;
		*/
	return x>y;
}
void vectorDemo()
{
		vector<int> A ={21,54,11,23} ;// vector is an array with no fixed length
	
	cout<<A[1]<<endl; // 0-1 indexing // 54 will be printed;

	sort(A.begin(),A.end()); // O(NlogN)
	//11,21,23,54

	// As the array is already sorted we can binary search on them 
	// which is also pre-implemented
	bool present = binary_search(A.begin(),A.end(),23); // true
	bool absent = binary_search(A.begin(),A.end(),2);  // false

	//we can add more elemenrs 
	A.push_back(100);
	present = binary_search(A.begin(),A.end(),100); // true
	//11,21,23,54,100
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);

	//11 21 23 54 100 100 100 100 100 123

	// if we want to search the index of the first 100;
	// we can use iterator  for that 
	// lower_bound() helps us to find the min index where 100 is present
	// lower_bound() gives us the first element which is greater or equal to 100
	for(int x:A)
		cout<<x<<"  ";
	cout<<endl;

	//vector<int>::iterator it = lower_bound(A.begin(),A.end(),100); //4 //>=
	// iterator is a pointer so if we wannna print value of iterator we must have to print *it
	auto it = lower_bound(A.begin(),A.end(),100); 



	//vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100); // >
	// upper_bound() gives us the index which is strictly greater than 100
	// lower_bound() and upper_bound() is done using binary search so , time Com: O(NlogN)
	auto it2 = upper_bound(A.begin(),A.end(),100);

	// auto can automacally decide the variable type of any variable 


	cout<<*it<<"   "<<*it2<<endl;
	cout<<it2-it<<endl;	 // how many 100's are there 
						 // 5

	// if we want to reverse the array , we can pass a comparator function 
	sort(A.begin(),A.end(),compf); // passing the comparator function 

	for(auto x:A)
		cout<<x<<"  ";
	cout<<endl;

	// if we wanna iterate in a vectror as well as modify that value we have to iterate through refrence

	for(auto &x:A) // the value is incremented by one !
	{	
		x++;
		cout<<x<<"  ";
	}
	cout<<endl;
}
void setDemo()
{
	set<int> S;

	S.insert(1);
	S.insert(2);
	S.insert(-1);
	S.insert(-10);  // insert :O(NlogN)
	//set insert the value in ascendin order when the elements are inserted into the SET
	// -10 -1 1 2 
	for(int x:S)
		cout<<x<<" ";
	cout<<endl;
	// any time in set the elements are sorted 

	// if we wanna find any element in the set

	auto it= S.find(-1) ;//index:1 will be there in it 

	// If the element is not present then it = S.end()
	// the last index of the set

	if(it==S.end())
		cout<<"not present"<<endl;
	else
	{
		cout<<"present"<<endl;
		cout<<*it;
	}
	cout<<endl;

	// if we wanna try to find the first number which is greater than or equal to the -1;
	auto it2 = S.lower_bound(-1); // as set S is sorted so set is having the in-build method attached 

	auto it3 = S.upper_bound(0);	//upper_bound() : is strictly greater than -1;  

	cout<<*it2 << "   "<<*it3 << endl;

	auto it4 = S.upper_bound(2);

	if(it4==S.end())
	{
		cout<<"oops sorry , cant find something like that !!"<<endl;;
	}

	//we can also erase the data from set 
	S.erase(1); // O(logN)

	for(int x:S)
		cout<<x<<" ";
	cout<<endl;
	

	
}

void mapDemo()
{
	map <int,int> M;
	M[1]=100;
	M[2]=-1;
	M[3]=200;
	M[10000]=1;
	// map : int to int , char to int , int to char , char to char 
	/*
		1----->100
		2----->-1
		3----->200
		10000->1
	*/
	map<char , int > cnt;
	string x = "swaraj sen";

	for(char c:x)
	{
		cnt[c]++;
	}
	cout<<cnt['a']<<" "<<cnt['z']<<endl;// how many times 'a' and 'z' occurs in my name 
	// frequency of any character in O(logN)  time .
	// we can also find and erase elements in O(logN) time


}

void powerofStl()
{
	// we will add intervals 
	// add[2 to 3]
	// add[10 to 20]
	// add[30 to 400]
	// give me the interval which contain 15!  ans - 10 to 20
	set<pair<int , int >> S;
	//{2,3} {10,20}

	S.insert({401,450});
	S.insert({10,20});
	S.insert({2,3});
	S.insert({30,400});
	// pair{a,b} is smaller than pair {c,d}
	// iff (a<b) or (a==b and c<d)
	// set is always ascending in nature
	// 2,3
	// 10,20
	// 30,400
	// 401,450  
	// if X co-ordintes are diffrent then it will be ordered using X co-ordinate otherwise it will be ordered by Y co-ordinate
	// if we wanna find 31
	// <31,?> if we use upper_bound() then we will get <401,450>
	// <12 ,?> then using upper_bound() we will get <30,400>
	int point = 50;
	
	auto it= S.upper_bound({point,INT_MAX}) ;


	if(it==S.begin())
	{
		cout<<"given point is not lying in any intervals "<<endl;
	}
	else
	{	
		it--;
		// pair X={a,b} can be accessed using X.first and X.second;
		pair<int , int> current=*it;

		if(current.first<=point && point<= current.second)
		{
			cout<<"yes it presents "<<current.first<<"  "<<current.second<<endl;
		}

		else
		{
			cout<<"given point is not lying in any intervals "<<endl;
		}
	}
}
int main()
{
	//setDemo();
	//mapDemo();
	powerofStl();
	return 0;
}








