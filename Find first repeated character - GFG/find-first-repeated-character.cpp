// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    string str="";
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    
    if(m[s[i]]>1){
    str=s[i];
    return str;
    }
    }
return "-1";
    
}