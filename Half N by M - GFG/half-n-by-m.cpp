// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        N=N/pow(2,M-1);
        return N;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends