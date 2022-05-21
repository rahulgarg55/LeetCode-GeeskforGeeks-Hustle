// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
    vector<int>ans(n,0);
    int even=0,odd=1;
    for(int i=0;i<n;i++){
        if(a[i]>0){ans[even]=a[i];
        even+=2;
       }else{
           ans[odd]=a[i];
           odd+=2;
       } 
    }
    return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
  // } Driver Code Ends