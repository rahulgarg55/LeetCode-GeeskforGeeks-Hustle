// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isDivisible(int N) {
        // code here
        
     int sum=0;
     int N1=N;
     while(N>0){
         sum+=N%10;
     N=N/10;
         
     }
     if(N1%sum==0)return 1;
     else return 0;
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
        cout << ob.isDivisible(N) << "\n";
    }
}  // } Driver Code Ends