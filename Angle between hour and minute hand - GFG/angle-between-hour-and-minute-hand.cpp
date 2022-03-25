// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getAngle(int H , int M) {
        
    float ans=abs(30*H-5.5*M);
        if(ans>180)return floor(360-ans);
        else return floor(ans);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}  // } Driver Code Ends