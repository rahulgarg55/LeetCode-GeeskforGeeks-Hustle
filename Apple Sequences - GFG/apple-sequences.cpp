//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
         int i=0,j=0;
         int pres=0;
         int maxi=0;
         while(j<n){
             if(arr[j]=='A'){
                 maxi=max(maxi,j-i+1);
             }
             if(arr[j]=='O'){
                 pres++;
                 if(pres>m){
                     while(i<j and arr[i]!='O')
                     i++;
                     i++;
                 }
                 maxi=max(maxi,j-i+1);
             }
             j++;
         
            }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends