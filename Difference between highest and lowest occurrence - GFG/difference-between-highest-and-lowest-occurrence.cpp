// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int findDiff(int arr[], int n) {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int max=INT_MIN; //to store highest occuring element.
        int min=INT_MAX; //to store lowest occuring element.
        for(auto i:m){
            if(i.second<min)min=i.second;
            if(i.second>max)max=i.second;
        }
        return max-min;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}
  // } Driver Code Ends