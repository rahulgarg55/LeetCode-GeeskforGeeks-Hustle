// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int solve(string s){
    set<char>st;
    for(auto x:s)st.insert(x);
    return st.size();
}
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	  vector<int>ans;
	  for(auto it:Query){
	      int lo=it[0];
	      int hi=it[1];
	      int st=lo-1;
	      int len=hi-lo+1;
	      int a=solve(str.substr(st,len));
	      ans.push_back(a);
	  }
	  return ans;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends