// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> numAndDen(int n, int d) {
        // code here
        int a=-1,b=-1;
        double req=(double)n/d;
        for(int q=10000;q>=1;q--){
            int p=q*req;
            int pd,nq;
            pd=p*d;
            nq=n*q;
            if(pd<nq){
                if(a==-1)a=p,b=q;
                else if(p*b>a*q){
                    a=p,b=q;
                }
            }
        }
        return {a,b};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        Solution ob;
        vector<int>ans=ob.numAndDen(n,d);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends