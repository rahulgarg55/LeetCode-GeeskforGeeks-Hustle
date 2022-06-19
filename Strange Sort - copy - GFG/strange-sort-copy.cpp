// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
        void strangeSort (int arr[], int n, int k)
            {
            	//code here.
            	int store=arr[k-1];
            	arr[k-1]=INT_MAX;
            	sort(arr,arr+n);
            	for(int i=n-1;i>k-1;i--){
            	    arr[i]=arr[i-1];
            	}
            	arr[k-1]=store;
            }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int k; cin >> k;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		ob.strangeSort (arr, n, k);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends