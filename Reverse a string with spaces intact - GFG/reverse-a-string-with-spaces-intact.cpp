// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
            int n=s.length();
         int i=0,j=n-1;
        while(i<j){
            if(s[i]==' ')i++;
            if(s[j]==' ')j--;
            if(s[i]!=' ' && s[j]!=' '){
             swap(s[i],s[j]);
             i++;
             j--;
            }
        }
        return s;
      
}
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends