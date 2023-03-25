//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int f(int ind,int t,int coins[],vector<vector<long long int>>&dp){
     
  if(ind==0)return(t%coins[0]==0);
   
   if(dp[ind][t]!=-1)return dp[ind][t];
   long long int nottake=0+f(ind-1,t,coins,dp);
   long long int take=0;
   if(coins[ind]<=t)take=f(ind,t-coins[ind],coins,dp);
   return dp[ind][t]=take+nottake;
      
  }
    long long int count(int coins[], int N, int t) {
        vector<vector<long long int>>dp(N,vector<long long int>(t+1,-1));
        return f(N-1,t,coins,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends