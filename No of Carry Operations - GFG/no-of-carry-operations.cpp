// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long countCarry(long long A , long long B) {
        // code here
        long long count=0;
        long long carry=0;
        while(A && B){
            int d1=A%10;
            int d2=B%10;
            carry=(d1+d2+carry)/10;
        
            if(carry>0)count++;
        
        A/=10;
        B/=10;
        }
        return count;
        
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long A,B;
        cin>>A>>B;

        Solution ob;
        cout<<ob.countCarry(A,B)<<endl;
    }
    return 0;
}  // } Driver Code Ends