// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        
     int n=S.length();
     if(n==1)return S; //base case
     string str="";
     for(int i=0;i<n-1;i++){
         if(S[i]!=S[i+1]){
         str+=S[i];
         }
         else continue;
     }
         
     
     str.push_back(S[n-1]);
     return str;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends