//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int knightInGeekland(int x,int y,vector<vector<int>> &arr){
          int n=arr.size();
        int m=arr[0].size();
        queue<pair<int,int>> q;
        vector<int> store;
        vector<vector<bool>>vis(arr.size(),vector<bool>(arr[0].size(),0));
        
        q.push({x,y});
        store.push_back(arr[x][y]);
        vis[x][y]=1;
        
        vector<int> dr={-2,-2,2,2,-1,-1,1,1};
        vector<int> dc={-1,1,-1,1,-2,2,-2,2};
        
        while(!q.empty()){
            
            int z=q.size();
            int sum=0;
            for(int i=0; i<z; i++){
                
                pair<int,int> temp=q.front();
                q.pop();
                
                int row=temp.first;
                int col=temp.second;
                
                for(int j=0; j<8; j++){
                    
                    int nr=row+dr[j];
                    int nc=col+dc[j];
                    
                    if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]){
                        
                        q.push({nr,nc});
                        sum+=arr[nr][nc];
                        vis[nr][nc]=1;
                    }
                }
                
                
                
            }
            store.push_back(sum);
        }
        
        int maxs=-1;
        int ans=-1;
       for(int i=0; i<store.size(); i++){
           int st=0;
           for(int j=i; j<store.size() && store[j]!=0; j+=store[j]){
               
               st+=store[j];
           }
           
           if(maxs<st){
               ans=i;
               maxs=st;
           }
       }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends