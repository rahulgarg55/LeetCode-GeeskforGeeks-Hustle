// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int minD=INT_MAX,minx=-1,miny=-1;
        for(int i=0;i<n;i++){
            if(a[i]==x)minx=i;
            else if(a[i]==y)
            miny=i;
            if(minx>-1 && miny>-1)
            minD=min(minD,abs(minx-miny));
        }
        return(minD==INT_MAX)?-1:minD;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends