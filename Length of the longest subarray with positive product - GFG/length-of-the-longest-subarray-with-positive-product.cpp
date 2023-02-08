//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        int maxLength(vector<int> &arr,int N){
           int ans=0,freqneg=-1,pzero=-1,neg=0;
           for(int i=0;i<N;i++){
                if(arr[i]<0){
                   neg++;
                   if(freqneg==-1)freqneg=i;
                }
                if(arr[i]==0){
                    neg=0,pzero=i,freqneg=-1;
                }else{
                    if(neg%2==0){
                        ans=max(ans,i-pzero);
                    }else{
                        ans=max(ans,i-freqneg);
                    }
                }
           
               }
               return ans;
           }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends