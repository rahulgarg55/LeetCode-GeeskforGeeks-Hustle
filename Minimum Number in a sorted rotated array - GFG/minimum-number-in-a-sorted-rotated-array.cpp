// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
       if(high<low)return arr[0]; //array is not rotated at all
       if(high==low)return arr[low]; //only ine ekement present
       int mid=low+(high-low)/2;
       if(mid<high && arr[mid+1]<arr[mid])
    return arr[mid+1]; //for eg 3 4 5 1 2 
    if(mid>low && arr[mid]<arr[mid-1])return arr[mid]; //if mid element is minimum element
    if(arr[high]>arr[mid]) //decide where to move 
        return minNumber(arr,low,mid-1);
        return minNumber(arr,mid+1,high);

     return -1;
    }     
    
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends