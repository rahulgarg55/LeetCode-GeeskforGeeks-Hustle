// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void dfs(int v,int p,vector<int>&dist,vector<vector<int>>&adj){
    
    for(auto to:adj[v]){
        if(to==p)continue;
        dist[to]=dist[v]+1;
        dfs(to,v,dist,adj);
    }
}
    int partyHouse(int N, vector<vector<int>> &adj){
        // code here
            int mn=1e9+7;
        
    for(int i=1;i<=N;i++){
        vector<int>dist(N+1);
        
        dfs(i,0,dist,adj);
        int mx=0;
        for(int i=1;i<=N;i++){
            mx=max(mx,dist[i]);
        }
        mn=min(mn,mx);
    }
    return mn;
    
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends