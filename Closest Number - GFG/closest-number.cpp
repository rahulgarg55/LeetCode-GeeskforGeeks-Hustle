// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        int q=N/M;
        int n1=M*q; //1st possible closest number.
        int n2;
        if((N*M)>0)
        n2=M*(q+1);
        else n2=M*(q-1);
        if(abs(N-n1)<abs(N-n2))
        return n1;
        else return n2;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends