//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
string res;
int i=A.size()-1;
int j=B.size()-1;
int sum,carry=0;
while(i>=0 ||j>=0){
    sum=carry;
    if(i>=0)sum+=A[i]-'0';
    if(j>=0)sum+=B[j]-'0';
    res+=to_string(sum%2);
carry=sum/2;
i--,j--;
}    
if(carry!=0)res+='1';
reverse(res.begin(),res.end());
int ind;
for(ind=0;ind<res.size();ind++){
    if(res[ind]=='1')break;
}

return res.substr(ind);
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends