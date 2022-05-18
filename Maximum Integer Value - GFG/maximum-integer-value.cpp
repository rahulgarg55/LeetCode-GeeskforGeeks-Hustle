// { Driver Code Starts
// Initial temolate for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// user function temolate for C++

class Solution {
  public:
    long long int MaximumIntegerValue(string S) {
        // code here
        long long int ans=0;
        long long int sum=0;
        long long int sum1=0;
        for(int i=0;i<S.length();i++){
            int n=int(S[i]-'0');
            sum=ans+n;
            sum1=ans*n;
        ans=max(sum,sum1);
        }
        return ans;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.MaximumIntegerValue(S) << endl;
    }
    return 0;
}  // } Driver Code Ends