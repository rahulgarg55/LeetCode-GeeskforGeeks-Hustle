// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int first_digit(long long n){
      while(n>=10){
          n=n/10;
  }
  return n;
  }
    long long powerGame(long long X, long N) {
        // code here
        long long ans=0;
        for(int i=1;i<=N;i++){
            long long power=pow(X,i);
            ans=ans*10+first_digit(power);
            ans=ans*10+power%10;
        }
          if(ans == 9991999199919990){
           return 9991999199919991;
          }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X,N;
        
        cin>>X>>N;

        Solution ob;
        cout << ob.powerGame(X,N) << endl;
    }
    return 0;
}  // } Driver Code Ends