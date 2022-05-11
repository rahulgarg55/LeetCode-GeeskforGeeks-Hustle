// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        string ans;
        if(sum>9*n)return "-1";
            for(int i=0;i<n;i++){
                if(sum>=9){
                   
                    ans.push_back('9');
                }else{
                    ans.push_back('0'+sum);
                  
                }
                 sum-=(ans[i]-'0'); 
            }
            return ans;
        }
        
    
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends