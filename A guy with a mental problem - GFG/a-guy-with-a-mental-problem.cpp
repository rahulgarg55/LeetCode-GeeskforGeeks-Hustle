// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here  
        long long sum1=0;
        long long sum2=0;
        sum1+=a[0];
        sum2+=b[0];
        for(int i=1;i<n;i++){
            if(i%2==0){
                sum1+=a[i];
                sum2+=b[i];
            }else{
                sum1+=b[i];
                sum2+=a[i];
            }
            
        }
        return(sum1<sum2)?sum1:sum2;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends