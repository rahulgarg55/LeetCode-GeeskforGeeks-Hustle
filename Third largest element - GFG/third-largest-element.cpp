// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<=2)return -1;
         int first=a[0],second=INT_MIN,third=INT_MIN;
         for(int i=1;i<n;i++){
             if(a[i]>first){
                 third=second;
                 second=first;
                 first=a[i];
             }
             else if(a[i]>second){
                 third=second;
                 second=a[i];
             }else if(a[i]>third){
                 third=a[i];
             }
         }
         return third;
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
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends