// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
         const long long int MOD = 1e9 + 7;
        long long int a = 0, ab = 0, abc = 0;
        
        for(char ch: s) {
            // 1. Append a to a's
            // 2. Start new string with a.
            if(ch == 'a') a = (2 * a % MOD + 1) % MOD;
            
            // 1. Append b to ab's
            // 2. Append b directly to a's
            if(ch == 'b') ab = (2 * ab % MOD + a) % MOD;
            
            // 1. Append c to abc's
            // 2. Append c directly to ab's
            if(ch == 'c') abc = (2 * abc % MOD + ab) % MOD;
        }
        
        return abc;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends