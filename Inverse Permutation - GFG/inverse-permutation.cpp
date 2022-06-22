// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> inversePermutation(int arr[], int size);

// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
        	cout << ans[i] << " ";
    	cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> inversePermutation(int arr[], int size) {
 vector<int>ans(size);
 for(int i=0;i<size;i++){
     ans[arr[i]-1]=i+1;
 }
 return ans;
}