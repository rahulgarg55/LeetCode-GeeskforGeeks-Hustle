// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int isReversible(string str, int n) { 
         //complete the function here
         for(int i=0,j=n-1;i<j;i++,j--){
             if(str[i]!=str[j])
             return 0;
         }
         return 1;
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}

  // } Driver Code Ends