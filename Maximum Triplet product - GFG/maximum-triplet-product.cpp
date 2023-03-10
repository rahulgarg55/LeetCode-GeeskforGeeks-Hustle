//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
   long long mn1=INT_MAX,mn2=INT_MAX,mx1=INT_MIN,mx2=INT_MIN,
   mx3=INT_MIN;
   for(int j=0;j<n;j++){
       if(arr[j]<mn1){
           mn2=mn1;
           mn1=arr[j];
       }else if(arr[j]<mn2){
           mn2=arr[j];
   }
   if(arr[j]>mx1){
       mx3=mx2;
          mx2=mx1;
          mx1=arr[j];
   }else if(arr[j]>mx2){
       mx3=mx2;
       mx2=arr[j];
   }else if(arr[j]>mx3){
       mx3=arr[j];
   }
    	
    }
    return max((mn1*mn2*mx1),(mx1*mx2*mx3));
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends