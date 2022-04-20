// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends

 

string merge (string S1, string S2)
{
    // your code here
    int i=0;
 string res="";
 for(i=0;i<S1.length() || i<S2.length();i++){
     if(i<S1.length())
     res+=S1[i];
     if(i<S2.length())
     res+=S2[i];
 }
 return res;
}