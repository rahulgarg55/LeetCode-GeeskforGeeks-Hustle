//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        multiset<int>s;
        int ans=0;
        for(int i=0,j=0;i<N;i++){
            s.insert(arr[i]);
            while(*s.rbegin()-*s.begin()>1)
            s.erase(s.find(arr[j++]));
            ans=max(ans,(int)s.size());
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends