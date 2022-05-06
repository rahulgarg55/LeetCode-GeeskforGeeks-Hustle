// { Driver Code Starts
#include <bits/stdc++.h>
 
using namespace std;
 

 // } Driver Code Ends
class Solution{
public:
#define vi vector<int>
    void make_graph(vector<vi> &V,vi* adj,vi* trans_adj){
        for(int i=0;i<V.size()-1;i++){
            adj[V[i][0]].push_back(V[i][1]);
            trans_adj[V[i][1]].push_back(V[i][0]);
        }
        
        return;
    }
    
	int outdeg(unordered_set<int> st,vi* adj){
	    int out=0;
	    for(auto i:st){
	        for(int child:adj[i]){
	            if(st.find(child)==st.end()) out++;
	        }
	    }
	    
	    return out;
	}
	
	void topo_dfs(int node,vi* adj,vi &vis,stack<int> &st){
	    vis[node]=true;
	    
	    for(auto i:adj[node]){
	        if(!vis[i]){
	            topo_dfs(i,adj,vis,st);
	        }
	    }
	    
	    st.push(node);
	    return;
	}
	
	void dfs(int node,vi* adj,vi &vis,unordered_set<int> &sett){
	    vis[node]=true;
	    sett.insert(node);
	    
	    for(auto i:adj[node]){
	        if(!vis[i]){
	            dfs(i,adj,vis,sett);
	        }
	    }
	    
	    return;
	}
	
    int captainAmerica(int N, int M, vector<vector<int>> &V){
        // Code Here
           int out_0=0;
        int max_size=INT_MIN;
        
        vi adj[N+1];
        vi vis(N+1,false);
        stack<int> st;
        vi trans[N+1];
        
        make_graph(V,adj,trans);
        
        for(int i=1;i<N+1;i++){
            if(!vis[i]){
                topo_dfs(i,adj,vis,st);
            }
        }
        
        for(int i=0;i<N+1;i++){
            vis[i]=false;
        }
        
        
        while(!st.empty()){
            unordered_set<int> sett;
            if(!vis[st.top()]){
                dfs(st.top(),trans,vis,sett);
                
                if(outdeg(sett,adj)==0){
                    int size=sett.size();
                    //cout<<size;
                    max_size=max(max_size,size);
                    out_0++;
                }
            }
            st.pop();
        }
        
        if(out_0>1) return 0;
        return max_size;
    }
     
};

// { Driver Code Starts.
 

int main() {
    int t;cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m+1);
        for(int i=0;i<m;i++){
            int a, b;cin >> a >> b;
            v[i].push_back(a);
            v[i].push_back(b);
        }
        
        Solution obj;
        cout << obj.captainAmerica(n, m, v) << endl;
    }
 
}  // } Driver Code Ends