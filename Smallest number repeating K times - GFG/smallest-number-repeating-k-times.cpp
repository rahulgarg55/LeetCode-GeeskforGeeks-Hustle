// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        vector<int>v;
        int ans=INT_MAX;
    unordered_map<int,int>m;
    for(int i=0;i<N;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<N;i++){
        if(m[arr[i]]==K){
         ans=min(ans,arr[i]);
        }
    }
        if(ans==INT_MAX)return -1;
    
    return ans;
    
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends