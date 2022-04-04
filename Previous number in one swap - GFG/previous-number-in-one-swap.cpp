// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string S){
        // code here 
        int largest=S.size()-2;
        while(largest>=0&&S[largest]<=S[largest+1]){
            largest--;
        }
        if(largest<0)return "-1";
        int smallest=S.size()-1;
        while(smallest>largest && S[largest]<=S[smallest]){
            smallest--;
        }
        while(smallest>0 && S[smallest-1]==S[smallest]){
            smallest--;
        }
        swap(S[largest],S[smallest]);
        if(S[0]=='0')return "-1";
        return S;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends