// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	vector<vector<int>>dp;
	int TotalCount(string str){
	    // Code here
	        int n =str.length();
	    dp.resize(n,vector<int>(9*n,-1));
	    return grouping(str,0,0);
	    
	}
	int grouping(string str, int index, int sum)
	{    
	    if(index==str.length())return 1;
	    if(dp[index][sum]!=-1)return dp[index][sum];
	    int currentsum =0;
	    int ans = 0;
	    for(int i=index;i<str.size();i++)
	    {  
	        currentsum+=str[i]-'0'; 
	        if(currentsum>=sum)
	        ans+=grouping(str,i+1,currentsum);
	    }
	    return dp[index][sum]=ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends