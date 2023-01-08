//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
     vector<long long>ans(k,0);
         for(int i=0;i<n;i++){
             ans[arr[i]%k]++;
         }
         int count=0;
         for(int i=0;i<ans.size();i++){
             count+=ans[i]*(ans[i]-1)/2;
         }
         return count;
     
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends