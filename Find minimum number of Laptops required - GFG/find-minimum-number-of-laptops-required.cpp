//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int n, int start[], int end[]) {
        // Code here
        int ans=0;
        int c=0;
        sort(start,start+n);
        sort(end,end+n);
        int i=0,j=0;
     while(i<n){
              if(start[i]>=end[j]){
                  c--;
                  j++;
              }else{
                  c++;
                  ans=max(ans,c);
                  i++;
              
          }
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
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends