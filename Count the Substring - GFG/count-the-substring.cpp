//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  long long countSubstring(string S){
    int n=S.size();
    long long ans=0,zero=n,minus=0;
    int mp[2*n+5];
    memset(mp,0,sizeof(mp));
    int cur=zero;
    for(auto i:S){
      if(i=='0')
        cur--;
      else
        cur++;
      if(cur<=zero){
        minus++;
      }
      mp[cur]++;
    }
    for(int i=0;i<n;i++){
      ans+=(n-i-minus);
      if(S[i]=='1'){
        mp[zero+1]--;
        zero++;
        minus+=mp[zero];
      }
      else{
        mp[zero-1]--;
        zero--;
        minus--;
        minus-=mp[zero+1];
      }
    }
    return ans;
  }
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends