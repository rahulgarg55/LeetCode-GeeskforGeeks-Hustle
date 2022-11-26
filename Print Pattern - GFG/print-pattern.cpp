//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<int>ans;
void solve(int N){
    if(N<=0){
        ans.push_back(N);
        return;
    }
    ans.push_back(N);
    solve(N-5);
    ans.push_back(N);
}
    vector<int> pattern(int N){
        // code here
      /*  int temp=N;
        vector<int>v;
        v.push_back(temp);
        while(temp>0){
            v.push_back(temp-5);
            temp=temp-5;
        
         if(temp<0){
            while(temp==N){
        v.push_back(temp+5);
        temp=temp+5;
        
        }
         }
        }
        return v;
        //16 11 6 1 -4 
        //-4->temp
        */
        solve(N);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends