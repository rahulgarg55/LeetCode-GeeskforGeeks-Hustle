// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int subsequenceSum(string s) 
	{
	    // Your code goes here
	    int n=s.length();
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=s[i]-'0';
	    }
	    return sum*pow(2,n-1);
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
   		string s;
   		cin >> s;

   		Solution ob;

   		cout << ob.subsequenceSum(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends