// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int l=0,r=n-1,mid;  
	   while(l<=r){
	       int mid=l+(r-l)/2;
	       if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	       return arr[mid];
	       else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
	       l=mid+1;
	       else if(arr[mid]<arr[mid-1])
	       r=mid-1;
	   
	        }
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends