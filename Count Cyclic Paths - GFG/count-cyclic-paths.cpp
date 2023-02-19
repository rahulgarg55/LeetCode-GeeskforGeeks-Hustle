//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
#define mod 1000000007
    int countPaths(int n){
        // code here 
        long long int prevO=1,prevA=0,prevB=0,prevC=0;
        for(int i=1;i<=n;i++){
            int currO,currA,currB,currC;
            currO=(prevA+prevB+prevC)%mod;
               currA=(prevO+prevB+prevC)%mod;
                  currB=(prevA+prevO+prevC)%mod;
                     currC=(prevA+prevB+prevO)%mod;
            prevO=currO;
            prevA=currA;
            prevB=currB;
            prevC=currC;
           
    }
    return prevO;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends