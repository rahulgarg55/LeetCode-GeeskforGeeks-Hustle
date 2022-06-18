// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
           if(matrix[xs][ys]==0 || matrix[xd][yd]==0)return -1;
        int ans = -1;
        findLongestPath(matrix,xs,ys,xd,yd,0,ans);
        return ans;
        
    }
    
    void findLongestPath(vector<vector<int>> &matrix,int x,int y,int xd,int yd,int pathlength,int &ans)
     {
         if(x == xd && y == yd)
         {  if(pathlength>ans)ans = pathlength; return; }
         
         matrix[x][y]  = 2; 
         
         vector<pair<int,int>>neighbours = {{0,1}, {0,-1}, {1,0} ,{-1,0}};
         
         for(pair<int,int>neighbour : neighbours) {
             int newx = neighbour.first+x , newy = neighbour.second+y;
         if(newx>=0 && newy>=0 && newx<matrix.size() && newy<matrix[0].size() && matrix[newx][newy]==1)
             findLongestPath(matrix,newx,newy,xd,yd,pathlength+1,ans); }
         
         matrix[x][y] =1;
     }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends