//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count[26]={0};
            for(int j=i;j<n;j++){
                int mx=INT_MIN,mn=INT_MAX;
                count[s[j]-'a']++;
                for(auto x:count){
                    if(x!=0){
                        mn=min(x,mn);
                        mx=max(x,mx);
                    }
                }
                ans=ans+mx-mn;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends