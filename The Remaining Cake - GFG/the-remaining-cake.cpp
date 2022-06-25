// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    double remainingCircle(double R, int N, int M) {
        // code here
        return (6.28*R*(M-N))/M;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cout << fixed << setprecision(2);
    while (t--) {
        int N, M;
        double R;
        cin >> R >> N >> M;
        Solution ob;
        cout << ob.remainingCircle(R, N, M) << "\n";
    }
}  // } Driver Code Ends