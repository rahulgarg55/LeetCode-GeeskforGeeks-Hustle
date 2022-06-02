// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool helper(vector<vector<int>> &res,vector<vector<int>>& matrix,int n,int i,int j){
   if(i>=n || j>=n) return false;
   res[i][j]=1;
   if(i==n-1 && j==n-1)return true;
   int jumps=matrix[i][j];
   for(int k=1;k<=jumps;k++){
       if( helper(res,matrix,n,i,j+k)) return true;
       if( helper(res,matrix,n,i+k,j)) return true;
   }
   res[i][j]=0;
   return false;
   
}
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n=matrix.size();
   vector<vector<int>> res(n,vector<int>(n,0));
   if(helper(res,matrix,n,0,0))return res;
   return {{-1}};

	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends