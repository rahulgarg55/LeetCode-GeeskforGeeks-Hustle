// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
    // code here
   string res="";
   int n=1;
   for(int i=0;i<s.size();i++){
       if(s[i]==s[i+1]){
       n++;
   }else{
    res+=s[i]+to_string(n);
       n=1;
   }
   }
   reverse(res.begin(),res.end());
   return res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}
  // } Driver Code Ends