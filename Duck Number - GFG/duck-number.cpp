// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    }
}// } Driver Code Ends


bool check_duck(string N){
    //code
 int i=0;
 int n=N.length();
 while(i<n && N[i]=='0') //ignore leading zeroes
 i++;
 while(i<n){
     if(N[i]=='0')
     return true;
     i++;
 }
 return false;
    
}