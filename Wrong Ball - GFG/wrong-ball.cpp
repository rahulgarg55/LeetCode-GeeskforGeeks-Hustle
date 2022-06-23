// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}
// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    //code here.
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R' &&i%2!=0)count++;
        else if(s[i]=='B' && i%2==0)count++;
    }
    return count;
}
