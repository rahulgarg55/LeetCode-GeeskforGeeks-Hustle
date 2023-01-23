//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        string aftrem="";
        for(auto i:s){
        if(aftrem.size()==0 or aftrem.back()!=i)
            aftrem+=i;
            else aftrem.pop_back();
        }
        return aftrem.size()?aftrem:"-1";
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends