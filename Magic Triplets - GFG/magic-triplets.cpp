//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>a){
	    // Code here.
	    int n=a.size();
	    int ans =0;
int hash[n];
for(int i=0;i<n;i++)
{hash[i]=0;
    for(int j=i+1;j<n;j++)
    {if(a[j] > a[i])
       hash[i]++;
}}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++){
if(a[i]<a[j])
ans+=hash[j];
}}
return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends