// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        sort(ar,ar+n);
        int count=0;
        string first=ar[0];
        string last=ar[n-1];
        for(int i=0;i<first.length();i++){
            if(first[i]==last[i])count++;
            else break;
        }
        if(count==0)return "-1";
        return first.substr(0,count);
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends