//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &a) {
        // code here
      unordered_set<int>s1,s2;
      vector<int>ans1(n,0);
      vector<int>ans2(n,0);
      for(int i=0;i<n;i++){
         ans1[i]=s1.size();
         s1.insert(a[i]);
               }
      for(int i=n-1;i>=0;i--){
          ans2[i]=s2.size();
          s2.insert(a[i]);
      }
      vector<int>ans;
      for(int i=0;i<n;i++){
          int temp=ans1[i]-ans2[i];
          ans.push_back(temp);
      }
      return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends