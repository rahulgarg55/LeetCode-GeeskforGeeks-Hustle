// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countDivisibles(int A, int B, int M) {
if(A%M==0)return B/M-A/M+1;
else return B/M-A/M;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, M;
        cin >> A >> B >> M;
        Solution ob;
        cout<<ob.countDivisibles(A, B, M)<<endl;
    }
    return 0;
}
  // } Driver Code Ends