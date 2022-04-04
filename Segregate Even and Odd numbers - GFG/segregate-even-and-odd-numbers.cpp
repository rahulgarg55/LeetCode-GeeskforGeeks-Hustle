// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int>v;
	    vector<int>v1;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0)
	        v.push_back(arr[i]);
	        else v1.push_back(arr[i]);
	    }
	       sort(v.begin(),v.end());
	       sort(v1.begin(),v1.end());
	      for(int i=0;i<v.size();i++){
	          arr[i]=v[i];
	      }
	      for(int i=0;i<v1.size();i++){
	          arr[v.size()+i]=v1[i];
	      
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends