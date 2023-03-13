//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        int maxCoins(int n, vector <int> &a)
        {
         a.push_back(1);
         a.insert(a.begin(),1);
         vector<vector<int>>dp(a.size(),vector<int>(a.size(),0));
        for(int i=a.size()-3;i>=0;i--){
         for(int j=i+2;j<a.size();j++){
      for(int k=i+1;k<j;k++)
      dp[i][j]=max(dp[i][j], dp[i][k]+dp[k][j]+a[i]*a[k]*a[j]);
         }

        }
        return dp[0][a.size()-1];
            
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends