// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


bool decode (string S)
{
    // your code here
    string str="hello";
    int j=0;
    for(int i=0;i<S.size();i++){
        if(S[i]==str[j])
        j++;
    }
    return (j==5);
}