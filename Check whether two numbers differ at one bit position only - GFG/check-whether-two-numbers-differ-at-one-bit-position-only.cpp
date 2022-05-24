// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int DifferOne(long int a, long int b) { 
        //complete the function here
        int N=a^b;
        int count=0;
        while(N){
            N=N&(N-1);
            count++;
        }
        if(count==1)return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int a, b;
        cin >> a >> b;
        Solution ob;
        cout << ob.DifferOne(a, b) << endl;
    
    }
    return 0; 
} 
  // } Driver Code Ends