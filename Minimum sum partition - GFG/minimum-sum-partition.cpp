//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int solve(int arr[],int n,int totalsum,int sum,int index,vector<vector<int>>&dp){
      if(index==n)
      return abs(totalsum-2*sum);
      if(dp[index][sum]!=-1)
      return dp[index][sum];
      int ex=solve(arr,n,totalsum,sum+0,index+1,dp);
      int in=solve(arr,n,totalsum,sum+arr[index],index+1,dp);
      return dp[index][sum]=min(ex,in);
      
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	   
	    int totalsum=0;
	   for(int i=0;i<n;i++)
	   totalsum+=arr[i];
	    vector<vector<int>>dp(n+1,vector<int>(totalsum+1,-1));
	   return solve(arr,n,totalsum,0,0,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends