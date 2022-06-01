// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void TOH(int src,int dest,int helper,vector<pair<int,int>>&ans,int n){
    if(n==1){
        ans.push_back({src,dest});
        return;
    }
    TOH(src,helper,dest,ans,n-1);
    ans.push_back({src,dest});
    TOH(helper,dest,src,ans,n-1);
    return;
}
    vector<int> shiftPile(int N, int n){
        // code here
        vector<pair<int,int>>ans;
        TOH(1,3,2,ans,N);
        vector<int>v;
        v.push_back(ans[n-1].first);
        v.push_back(ans[n-1].second);
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends