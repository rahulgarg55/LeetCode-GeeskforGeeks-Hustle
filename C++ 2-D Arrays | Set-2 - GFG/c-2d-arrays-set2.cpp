// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    vector<vector<int>> final_matrix(vector<vector<int>> &a, int n)
    {
        // Code here
        set<int>rows,columns;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(rows.count(i)){
                for(int j=0;j<n;j++)a[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(columns.count(i)){
                for(int j=0;j<n;j++)a[j][i]=0;
            }
        }
        return a;
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
        vector<vector<int>> a(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        
        vector<vector<int>> ans;
        Solution obj;
        ans = obj.final_matrix(a, n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << ans[i][j]<<" ";
            }
            cout << endl;
        }
        
    }
}

  // } Driver Code Ends