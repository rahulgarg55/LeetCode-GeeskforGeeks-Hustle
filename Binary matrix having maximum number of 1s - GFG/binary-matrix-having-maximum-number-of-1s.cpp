//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
      vector<int>ans;
      int maxi=0;
      int maxrow=0;
      for(int i=0;i<n;i++){
          int c=0;
          for(int j=0;j<n;j++){
              if(mat[i][j]==1)c++;
          }
      
      if(c>maxi){
      maxi=c;
      maxrow=i;
      }
      }
       ans.push_back(maxrow);
       ans.push_back(maxi);
       return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends