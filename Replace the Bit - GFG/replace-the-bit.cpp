// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int replaceBit (int n, int k)
    {
        //code here.
      int limit=log2(n)+1; //to calculate count of integers in number
      if(k>limit)return n;
      int i=limit-k;
      if(n &(1<<i)) //if that bit is 1.
      return n&(~(1<<i));
      return n;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}

  // } Driver Code Ends