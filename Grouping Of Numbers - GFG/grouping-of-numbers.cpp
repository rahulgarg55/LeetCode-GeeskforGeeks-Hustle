//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int k) {
        // code here
    unordered_map<int,int>m;
    for(int i=0;i<N;i++){
        m[arr[i]%k]++;
    }
    int size=0;
    for(int i=1;i<=k/2;i++){
        if(i!=k-i)
            size+=max(m[i],m[k-i]);
        else{
            if(m[i]!=0)size++;
        
    }
    }
        if(m[0]!=0)size++;
     return size;   
                
            }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends