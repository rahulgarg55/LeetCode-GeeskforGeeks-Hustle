// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N){
        // code here
        long long int n,sq,sum,sum_square,square_diff;
        
        sq=(N*(N+1)*(2*N+1))/6;
        sum=N*(N+1)/2;
        sum_square=sum*sum;
        square_diff=abs(sq-sum_square);
        return square_diff;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.squaresDiff(N) << endl;
    }
    return 0;
}
  // } Driver Code Ends