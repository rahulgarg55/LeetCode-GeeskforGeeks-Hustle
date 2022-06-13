// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	    vector<int>lps(s.size());
	    computelps(lps,s);
	    int ans=lps[s.size()-1];
	    return (ans>0 && s.size()%(s.size()-ans)==0);
	}
	void computelps(vector<int>&lps,string str){
	    int i=1,len=0;
	    while(i<str.size()){
	        if(str[i]==str[len])
	        lps[i++]=++len;
	        else{
	            if(len==0)lps[i++]=0;
	            else len=lps[len-1];
	        }
	    }
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
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends