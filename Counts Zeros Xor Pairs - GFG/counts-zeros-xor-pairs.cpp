// { Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends


long long int calculate(int a[], int n)
{
    // Complete the function
    long long ans=0;
        
        
        unordered_map<int,int>m; //key,value pair
    for(int i=0;i<n;i++){
        m[a[i]]++; //to store frequency of each element
    }
    for(auto it:m){
     int count=it.second;  // frequency of elements.
     ans+=(count*(count-1))/2; //concept of combnatrics.
    }
    return ans;
}
