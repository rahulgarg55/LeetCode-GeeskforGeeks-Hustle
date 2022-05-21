// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
  public:
    long long int equalPairs (string s)
    {
    	//code here.
    	  int count[256]={0};
    long long int ans=0;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<256;i++){
        ans+=count[i]*count[i];
    }
    return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.equalPairs (s) << endl;
	}
}  // } Driver Code Ends