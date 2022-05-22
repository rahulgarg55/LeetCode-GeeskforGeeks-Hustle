// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
          unordered_set<int>s;
          for(int i=0;i<n;i++){
              s.insert(arr[i]*arr[i]);
          }
          for(int i=0;i<n-1;i++){
              for(int j=i+1;j<n;j++){
                  int sum=arr[i]*arr[i]+arr[j]*arr[j];
                  if(s.find(sum)!=s.end())
                  return true;
              }
          }
          return false;
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
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends