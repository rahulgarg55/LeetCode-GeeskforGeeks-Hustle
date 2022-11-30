//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if (n == 1) return 0;
        int ans = 1;
        int mx = arr[0];
        
        for (int i = 0;i < n;){
            int temp = mx;
            while(i < n and i <= mx){
                temp = max(temp, i + arr[i]);
                i += 1;
            }
            if (mx >= n-1)  return ans;
            if (temp >= n-1)   return ans+1;
            ans += 1;
            if (mx == temp) return -1;
            mx = temp;
        }
        return 121423242;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends