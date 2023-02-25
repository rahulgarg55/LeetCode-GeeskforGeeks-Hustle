//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
      int i=0,j=0;
     
      while(j<t.size() and i<s.size()){
          if(t[j]==s[i]){
              i++;
          j++;
          continue;
          }
          else{
              int c=0;
              while(j<t.size() and isdigit(t[j])){
                
                  c=c*10+(t[j]-'0');
                 j++;
              }
          
          i+=c;
      }
      if(s[i]!=t[j])return 0;
      }
          if(i==s.size() )return 1;
          else return 0;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends