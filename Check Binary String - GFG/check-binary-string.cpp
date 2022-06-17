// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    bool checkBinary (string s)
    {
        // Your Code Here   
        
      int n=s.length();
      if(n<=2)return 1;
      int A=n+1,B=0;
      for(int i=0;i<n;i++){
          if(s[i]=='1'){
          A=i;
          break;
          }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
        B=i;
        break;
        }
    }
    for(int i=A;i<=B;i++){
        if(s[i]=='0')
        return false;
    }
    return true;
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		if (ob.checkBinary (s))
			cout << "VALID\n";
		else
			cout << "INVALID\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends