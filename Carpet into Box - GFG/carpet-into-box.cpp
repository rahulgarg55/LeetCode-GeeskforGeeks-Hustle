//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int x=A,y=B;
        int c=0;
        while(x>C or y>D){
            if(x>C){x>>=1;
            c++;
        }else if(y>D){
            y>>=1;
            c++;
        }
        }
         x=A,y=B;
        int ans=0;
        while(x>D or y>C){
            if(x>D){x>>=1;
            ans++;
        }else if(y>C){
            y>>=1;
            ans++;
        }
        }
        return min(ans,c);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends