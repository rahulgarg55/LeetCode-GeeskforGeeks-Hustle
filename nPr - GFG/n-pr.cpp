// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r){
        // code here
        long long fact1=1,fact2=1,res=0;
        for(int i=1;i<=n;i++){
            fact1=fact1*i; //find factorial of numerator part
        }
        long long r1=n-r;
        for(int j=1;j<=r1;j++){
            fact2=fact2*j; //factorial of denominator part.
        }
        res=fact1/fact2; //final answer
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends