// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<long long>v;
        vector<long long>v1;
        for(long long i=0;i<n;i++){  //O(n)
            if(arr[i]%2!=0)
            v.push_back(arr[i]);
            else v1.push_back(arr[i]);
        }
        sort(v.begin(),v.end(),greater<int>()); //O(nlogn)
        sort(v1.begin(),v1.end());
        for(int i=0;i<v.size();i++){
            arr[i]=v[i];
        }
       int j=0;
        for(int i=v.size();i<(v.size()+v1.size());i++){
            arr[i]=v1[j];
            j++;
        }
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends