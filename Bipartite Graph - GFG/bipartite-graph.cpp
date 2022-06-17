// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>color(V,0);
	    for(int i=0;i<V;i++){
	        if(color[i]==0){
	            color[i]=1;
	            if(!dfs(i,adj,color))return false;
	        }
	        }
	        return true;
	    }
	    bool dfs(int vertex,vector<int>adj[],vector<int>&color){
	        vector<int>neighbours=adj[vertex];
	        for(int neighbour:neighbours){
	            if(color[neighbour]==color[vertex])return false;
	            else if(color[neighbour]==0){
	                color[neighbour]=(color[vertex]==1)?2:1;
	                if(!dfs(neighbour,adj,color))return false;
	            }
	        }
	        return true;
	    }
	

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends