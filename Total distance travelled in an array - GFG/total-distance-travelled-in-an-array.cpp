// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long distance(int arr[], int n) {
        // code here
         unordered_map<int, int>mp;
       
       for(int i=0; i<n ; i++)
        {
            mp[arr[i]]=i;
        }
        long long sum=0;
        for(int i=1; i<n ; i++)
         {
             sum+=abs(mp[i+1]-mp[i]);
         }
   
       return sum;
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
        auto ans = ob.distance(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


  // } Driver Code Ends