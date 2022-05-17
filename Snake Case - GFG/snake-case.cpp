// { Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string snakeCase(string S , int n) {
        // code here
        for(int i=0;i<n;i++){
            if(S[i]>='A' &&S[i]<='Z')
            S[i]+=('a'-'A');
            if(S[i]==' ')
            S[i]='_';
        }
        return S;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string S;
        
        cin >> n;
        getline(cin >> std::ws, S);

        Solution ob;
        cout<<ob.snakeCase(S,n)<<endl;;
        
    }
    return 0;
}  // } Driver Code Ends