// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
     int setbitsA=__builtin_popcount(a);
          int setbitsB=__builtin_popcount(b);
          int ans=0;
          for(int i=0;i<=31;i++){
              int mask=1<<i;
              int set=a&mask;
              if(set==0 && setbitsB>setbitsA){
                  ans|=mask;
                  setbitsB--;
              }else if(set && setbitsA>setbitsB){
                  setbitsA--;
              }else{
                  ans|=set;
              }
                  
              }
              return ans;
          

     }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends