// { Driver Code Starts
#include<iostream>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
        if((n&(n-1))==0 && (n%3==1))return 1;
        else return 0;
    
 
    }
};

// { Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}
  // } Driver Code Ends