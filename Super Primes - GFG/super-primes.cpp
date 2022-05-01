// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool isprime(int x){
	    for(int i=2;i*i<=x;i++){
	        if(x%i==0)return false;
	    }
	    return true;
	}
	int superPrimes(int n)
	{
	    // Your code goes here
int count=0;
for(int i=5;i<=n;i++){
    count+=isprime(i)&&isprime(i-2);
}
return count;
	    }
	    
	
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends