// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>m;
	    m[0]=-1;
	    int maxi=0;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int rem=sum%k;
	        if(rem<0){
	            rem+=k;
	        }
	        if(m.find(rem)!=m.end()){
	            int len=i-m[rem];
	            if(len>maxi){
	                maxi=len;
	            }
	        }
	        else if(m.find(rem)==m.end()){
	            m[rem]=i;
	        }
	    }
	    return maxi;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends