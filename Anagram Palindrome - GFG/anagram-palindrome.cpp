// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    unordered_map<char,int>m;
    for(int i=0;i<S.length();i++){
        m[S[i]]++;
    }
    int count=0;
    for(auto x:m){
        if(x.second%2!=0)
        count++;
        if(count>1)return 0;
    }
    return 1;
    
}