/*

Given a matrix of size R*C. Traverse the matrix in spiral form.

Example 1:

Input:
R = 4, C = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:

Example 2:

Input:
R = 3, C = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output:
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above,
output for the 2nd testcase will be
1 2 3 4 8 12 11 10 9 5 6 7.

Your Task:
You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, R and C as input parameters and returns a list of integers denoting the spiral traversal of matrix.

Expected Time Complexity: O(R*C)
Expected Auxiliary Space: O(R*C)

Constraints:
2 <= R, C <= 100
0 <= matrixi <= 100

*/


class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        vector<int> ans;
        int m=0, n=0;

        while(m<r && n<c)
        {
            for(int i=n;i<c;i++)
                ans.push_back(matrix[m][i]);
            m++;

            for(int i=m;i<r;i++)
                ans.push_back(matrix[i][c-1]);

            c--;

            if(m<r)
            {
                for(int i=c-1; i>=n; i--)
                    ans.push_back(matrix[r-1][i]);

                r--;
            }
            if(n<c)
            {
                for(int i=r-1;i>=m;i--)
                    ans.push_back(matrix[i][n]);

                n++;
            }

        }
        return ans;
    }
};
