/*
THIS PROGRAM IS VERY USEFULL FOW 2D ARRAY PASS.(USING VECTOR)

Given a 2D screen, location of a pixel in the screen ie(x,y) and a color(K), your task is to replace color of the given pixel and all adjacent(excluding diagonally adjacent) same colored pixels with the given color K.

Example:

{{1, 1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 1, 1, 0, 0},
{1, 0, 0, 1, 1, 0, 1, 1},
{1, 2, 2, 2, 2, 0, 1, 0},
{1, 1, 1, 2, 2, 0, 1, 0},
{1, 1, 1, 2, 2, 2, 2, 0},
{1, 1, 1, 1, 1, 2, 1, 1},
{1, 1, 1, 1, 1, 2, 2, 1},
 };

 x=4, y=4, color=3 

{{1, 1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 1, 1, 0, 0},
{1, 0, 0, 1, 1, 0, 1, 1}, 
{1, 3, 3, 3, 3, 0, 1, 0},
{1, 1, 1, 3, 3, 0, 1, 0},
{1, 1, 1, 3, 3, 3, 3, 0},
{1, 1, 1, 1, 1, 3, 1, 1},
{1, 1, 1, 1, 1, 3, 3, 1}, };

Note: Use zero based indexing.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains Two integers N and M denoting the size of the matrix. Then in the next line are N*M space separated values of the matrix. Then in the next line are three values x, y and K.

Output:
For each test case print the space separated values of the new matrix.

Constraints:
1 <= T <= 100
1 <= M[][] <= 100

Example:
Input:
3
3 4
0 1 1 0 1 1 1 1 0 1 2 3
0 1 5
2 2
1 1 1 1
0 1 8
4 4 
1 2 3 4 1 2 3 4 1 2 3 4 1 3 2 4
0 2 9

Output:
0 5 5 0 5 5 5 5 0 5 2 3
8 8 8 8
1 2 9 4 1 2 9 4 1 2 9 4 1 3 2 4

*/


#include<bits/stdc++.h>
using namespace std;
int r,c;
void floodFill(vector<int> arr[], int x, int y, int pre, int color)
{   
    if(x<0 || x>=r || y<0 || y>=c || arr[x][y]!= pre)
        return;
    
    arr[x][y] = color;
    
    floodFill(arr, x+1, y, pre, color);
    floodFill(arr, x-1, y, pre, color);
    floodFill(arr, x, y+1, pre, color);
    floodFill(arr, x, y-1, pre, color);
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>r>>c;
        vector<int> arr[r];
        
        for(int i=0;i<r;i++)
        {
            vector<int> col(c);
            arr[i] = col;
            for(int j=0;j<c;j++)
                cin>>arr[i][j];
        }
        int x, y, color;
        cin>>x>>y>>color;
        int pre = arr[x][y];
        
        floodFill(arr, x, y, pre, color);
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


