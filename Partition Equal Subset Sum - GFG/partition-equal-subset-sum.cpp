//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool f(int i,int target,int arr[],vector<vector<int>>&dp){
    if(target==0)return true;
    if(i==0)return (arr[0]==target); //final case
    if(dp[i][target]!=-1)return dp[i][target];
     bool nottake=f(i-1,target,arr,dp);
    bool take=false;
    if(target>=arr[i])
    take=f(i-1,target-arr[i],arr,dp);
   
    return dp[i][target]=take|nottake;
}
    int equalPartition(int N, int arr[])
    {
        // code here
        int totsum=0;
        for(int i=0;i<N;i++)totsum+=arr[i];
        vector<vector<int>>dp(N,vector<int>(totsum+1,-1));
        
        if(totsum%2!=0)return 0;
        int target=totsum/2;
    return f(N-1,target,arr,dp);
      
            
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends