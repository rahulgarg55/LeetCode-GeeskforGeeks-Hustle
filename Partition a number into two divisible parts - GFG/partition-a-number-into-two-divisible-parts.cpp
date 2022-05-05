// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        // code here 
       string m,n;
       int z=S.length();
       for(int i=1;i<z;i++){
           m=S.substr(0,i);
           n=S.substr(i); //25
  if(stoi(m)%a==0 && stoi(n)%b==0){
      return m+" "+n;
  }
       }
       return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends