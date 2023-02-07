//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool f(int i,int target,vector<int>&arr,vector<vector<int>>&dp){
    if(target==0)return true; //base case
    if(i==0)return (arr[0]==target);
    if(dp[i][target]!=-1)return dp[i][target];
    bool nottake=f(i-1,target,arr,dp);
     bool take=false;
    if(target>=arr[i])
     take=f(i-1,target-arr[i],arr,dp);
    return dp[i][target]=take|nottake;
}
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(n-1,sum,arr,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends