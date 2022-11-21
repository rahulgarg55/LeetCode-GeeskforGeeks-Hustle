//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<vector<int>>ans;
	void helper(int n,vector<int>&curr,int target){
	    if(target==0){
	    ans.push_back(curr);
	    return;
	    }
	    if(n==0)return;
	    if(target>=n){
	        curr.push_back(n);
	        helper(n,curr,target-n);
	        curr.pop_back();
	    }
	    helper(n-1,curr,target);
	}
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<int>curr;
        helper(n,curr,n);
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
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends