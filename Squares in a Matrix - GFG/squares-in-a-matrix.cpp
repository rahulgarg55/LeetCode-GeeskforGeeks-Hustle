// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInMatrix(int m, int n) {
        // code here
        if(m==0 || n==0)return 0;
        else return m*n+squaresInMatrix(m-1,n-1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        
        cin>>m>>n;

        Solution ob;
        cout << ob.squaresInMatrix(m,n) << endl;
    }
    return 0;
}  // } Driver Code Ends