// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int i=0,j=n-1;
    vector<int>ans;
    int first=-1,last=-1;
    
    while(i<=j){
    int mid=(i+j)/2;
    if(arr[mid]>=x){
        if(arr[mid]==x)first=mid;
      j=mid-1;
    }else i=mid+1;
}
ans.push_back(first);
i=0,j=n-1;
while(i<=j){
    int mid=(i+j)/2;
    if(arr[mid]<=x){
        if(arr[mid]==x)last=mid;
        i=mid+1;
    }else j=mid-1;
}
ans.push_back(last);

return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends