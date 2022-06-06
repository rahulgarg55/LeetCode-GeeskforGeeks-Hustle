// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
     int i,MAX=100000;
     long long fac[MAX+1],mod=1000000007;
     fac[0]=1;
     for(int i=1;i<=MAX;i++){
         fac[i]=(fac[i-1]*i)%mod;
     }
     vector<long long>ans(n);
     for(int i=0;i<n;i++){
         ans[i]=fac[a[i]];
     }
     return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends