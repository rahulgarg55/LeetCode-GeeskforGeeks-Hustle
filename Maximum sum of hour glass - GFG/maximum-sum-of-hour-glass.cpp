// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int N, int M, vector<vector<int>> Mat) {
        // code here
        int sum=0;
        int ms=INT_MIN;
        if(N<3 || M<3)return -1;
        for(int i=0;i<N-2;i++){
            for(int j=0;j<M-2;j++){
                sum=(Mat[i][j]+Mat[i][j+1]+Mat[i][j+2])+(Mat[i+1][j+1])+(Mat[i+2][j]+Mat[i+2][j+1]+Mat[i+2][j+2]);
        ms=max(ms,sum);
            }
        }
        return ms;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}  // } Driver Code Ends