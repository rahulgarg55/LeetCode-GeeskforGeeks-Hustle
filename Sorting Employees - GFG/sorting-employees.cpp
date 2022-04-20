// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;
struct node{
	int salary;
	string name;
};

 // } Driver Code Ends
/* struct node{          // node structure
     int salary;
     string name;
 };
*/

static bool compare(node i,node j){

    if(i.salary==j.salary){
    return i.name<j.name;
}
return i.salary<j.salary;
}

class Solution{

	public:
	void sortRecords(node arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n, compare);
    
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
        node arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i].name>>arr[i].salary;
        

        Solution ob;
        ob.sortRecords(arr, n);
        for(int i=0;i<n;i++)
        	cout<<arr[i].name<<" "<<arr[i].salary<<" ";
	    cout << "\n";
	     
    }
    return 0;
}






  // } Driver Code Ends