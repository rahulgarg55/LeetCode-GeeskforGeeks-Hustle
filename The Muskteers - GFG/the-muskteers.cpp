// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    bool checkTogether(string str)
    {
        // Write your code here
        int first=-1,last=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                first=i;
                break;
            }
        }
            if(first==-1)return false;
            for(int i=first+1;i<str.size();i++){
                if(str[i]=='0'){
                    last=i;
                }
            }
            for(int i=first;i<last;i++){
                if(str[i]=='1'){
                    return false;
                
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        Solution ob;
        bool ans = ob.checkTogether(str) ;
        
        if(ans){
            cout<< "YES" <<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}  // } Driver Code Ends