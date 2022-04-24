// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool>isprime(N+1,true);
        vector<int>v;
        for(int i=2;i<=N;i++){
           if(isprime[i])v.push_back(i);
            for(int j=i*i;j<=N;j=j+i){
                isprime[j]=false;
            }
       
        }
        return v;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends