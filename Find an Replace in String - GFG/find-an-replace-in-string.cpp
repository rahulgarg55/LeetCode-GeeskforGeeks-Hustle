// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
        int newlength=0;
        string original=S;
    
        for(int i=0;i<Q;i++){
            auto found=original.find(sources[i]);
                while(found!=string::npos){
            if(found==index[i]){
                S.replace(found+newlength,sources[i].size(),targets[i]);
                newlength+=targets[i].size()-sources[i].size();
            }
            found=original.find(sources[i],found+1); //to change newxt occcurence and make copy to find next occurence
        }
    }
    return S;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends