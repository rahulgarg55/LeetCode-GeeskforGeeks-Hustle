// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(T==0)return 0;
    
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<N;i++){
            pq.push({B[i],A[i]});
        }
        int res=0;
        while(T>0 and pq.size()>0){
            int goldcoins=pq.top().first;
            int noofplates=pq.top().second;
            pq.pop();
            while(T>0 and noofplates>0){
                res+=goldcoins;
                T--;
                noofplates--;
            }
        }
        return res;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends