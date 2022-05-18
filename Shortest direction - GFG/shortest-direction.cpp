// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string shortestPath (string S)
    {
        // your code here
        int x=0,y=0;
        string ans="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='E')
            x++;
            else if(S[i]=='N')
            y++;
            else if(S[i]=='S')
            y--;
            else if(S[i]=='W')
            x--;
        }
        while(x||y){
            if(x>0){
            ans+="E";
            x--;
            }
            else
                 if(y>0){
            ans+="N";
            y--;
            }
            else
                if(y<0){
        ans+="S";
        y++;
        }else{ 
        ans+="W";
        x++;
        }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.shortestPath (s) << endl;
    }
}
  // } Driver Code Ends