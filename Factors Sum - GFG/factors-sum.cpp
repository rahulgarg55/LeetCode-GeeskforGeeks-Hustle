// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    long long factorSum(int N)
    {
        // Your code goes here
        long long sum=0;
        if(N==1 || N==2)return 1;
        
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0){
                if(i==(N/i))
                sum+=i;
                //if both divisors are same then add it once else add both
                else 
                sum+=(i+N/i);
            }
        } 
        
        return (sum+N+1);
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
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    }
    return 0;
}
  // } Driver Code Ends