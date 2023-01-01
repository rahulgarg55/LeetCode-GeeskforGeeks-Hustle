//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod=1e9+7;
	long long int inverse(long long int i){
	    if(i==1)return 1;
	    return (mod-((mod/i)*inverse(mod%i))%mod+mod)%mod;
	}
	int compute_value(int n)
	{
	    // Code here
	    long long int count=1,ncr=1;
	    for(int r=1;r<=n;r++){
	        ncr=(((ncr*(n+1-r))%mod)*inverse(r))%mod;
	        count+=(ncr*ncr)%mod;
	    }
	    return count%mod;
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