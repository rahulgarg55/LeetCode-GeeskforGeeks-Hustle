// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	        vector<int> shuffle;
	    
	    int i=0, j = n/2;
	    while(j < n)
	    {
	        shuffle.push_back(arr[i++]);
	        shuffle.push_back(arr[j++]);
	    }
	    
	    for(int i=0; i<n; i++)
	        arr[i] = shuffle[i];

	    
	    
	}
		 

};

// { Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends