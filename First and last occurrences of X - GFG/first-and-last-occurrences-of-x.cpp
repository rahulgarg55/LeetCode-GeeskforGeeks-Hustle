// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int first(vector<int> &arr, int x, int n){
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]<x){
            l=mid+1;
            }
            else if(arr[mid]>x){ 
                h=mid-1;
                
            }
            else{
                res=mid;
                h=mid-1;
        }
    }
    return res;
    }
    int last(vector<int> &arr, int x, int n){
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]<x){
                l=mid+1;
            }
            else if(arr[mid]>x){
                h=mid-1;
            }else{
            res=mid;
            l=mid+1;
        }
    }
    return res;
    }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        
            int left=first(arr,x,n);
            int right=last(arr,x,n);
       if(left==-1 ||right==-1)return {-1};
       else return {left,right};
           
        }
    
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends