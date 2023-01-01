//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod=1e9+7;
	long long int inv(long long int i){
	    if(i==1)return 1;
	    return (mod-((mod/i)*inv(mod%i))%mod+mod)%mod;
	}
	int compute_value(int n)
	{
	    // Code here
	    long long int ans=1,ncr=1;
	    for(int r=1;r<=n;r++){
	        ncr=(((ncr*(n+1-r))%mod)*inv(r))%mod;
	        ans+=(ncr*ncr)%mod;
	    }
	    return ans%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.compute_value(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends