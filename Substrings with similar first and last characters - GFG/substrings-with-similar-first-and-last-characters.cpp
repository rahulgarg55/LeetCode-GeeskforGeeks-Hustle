// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
const int MAX_CHAR=26;
	int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	    int n=s.length();
	    int result=0;
	    int count[MAX_CHAR]={0};
	    for(int i=0;i<n;i++){ //count freq of all char
	        count[s[i]-'a']++;
	    }
	    for(int i=0;i<MAX_CHAR;i++){
	    result+=(count[i]*(count[i]+1)/2);
	    }
	    return result;
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

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends