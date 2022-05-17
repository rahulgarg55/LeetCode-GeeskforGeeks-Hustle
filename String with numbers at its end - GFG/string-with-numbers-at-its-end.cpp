// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	  int count=0,res=0;
	  for(int i=0;i<s.length();i++){
	      if(s[i]>='a' && s[i]<='z')
	      count++;
	      else{
	          int t=s[i]-'0';
	          res=res*10+t;
	          }
	     
	  }
	  if(res==count)return 1;
	  else return 0;
	}

	
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends