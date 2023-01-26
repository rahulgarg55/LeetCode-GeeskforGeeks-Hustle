//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
            string ans;
            string lower;
            string upper;
            for(int i=0;i<n;i++){
                if(islower(str[i]))
                lower+=str[i];
                else upper+=str[i];
            }
            sort(lower.begin(),lower.end());
            sort(upper.begin(),upper.end());
            int i=0,j=0,k=0;
            while(i<lower.size() or j<upper.size() or k<str.size()){
            if(islower(str[k])){
                ans+=lower[i++];
            }else{
                ans+=upper[j++];
            }
                k++;
            }
            return ans;
            
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends