//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> a) {
        // code here
        long long sum=0;
        long long dp[n];
        for(int i=0;i<k;i++){
            sum+=a[i];
            dp[i+1]=a[i];
        }
        for(int i=k+1;i<=n;i++){
            dp[i]=sum;
            sum+=dp[i]-dp[i-k];
        }
        return dp[n];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends