// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long int fib(int N){
    if(N==1)return 0;
    if(N==2)return 1;
    else return pow(fib(N-2),2)-fib(N-1);
}
    void gfSeries(int N)
    {
        // Write Your Code here
        for(long long int i=1;i<=N;i++){
   cout<<fib(i)<<" ";
        }
   cout<<endl;
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
        ob.gfSeries(N);
    }
    return 0;
}  // } Driver Code Ends