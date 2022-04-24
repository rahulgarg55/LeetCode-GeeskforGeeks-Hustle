// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool isprime(int n){
   
       for(int i=2;i<=sqrt(n);++i){
           if(n%i==0){
               return 0;
           }
       }
       return 1;
   }
   

   long long primeProduct(long long L, long long R){
       long long ans=1;
       for(int i=L;i<=R;++i){
           if(isprime(i)){
             // cout<<i<<endl;
              ans=ans*i%1000000007;
           }
       }
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends