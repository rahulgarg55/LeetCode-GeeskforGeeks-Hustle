// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
void find(string value,string inp)
   {
     if(inp.size()==0)
     {
         v1.push_back(value);
         return;
     }
     char s= inp[0];
     find(value+" "+s,inp.substr(1,inp.size()));
      find(value+s,inp.substr(1,inp.size()));
   }
   vector<string>v1;
    vector<string> permutation(string S){
        // Code Here
        char c = S[0];
    string value="";
    value+=c;
     string inp=S.substr(1,S.size());
     find(value,inp);
     return v1;
   
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends