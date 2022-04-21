// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int differenceSeries(int N)
    {
        // Write Your Code here
        return (N*(2*N+1));
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
        int ans = ob.differenceSeries(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends