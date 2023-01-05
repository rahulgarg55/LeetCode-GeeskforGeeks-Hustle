//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
       /* a ab abc abd
        a->1
        ab->1
        abc->1
        abd->1 */
  sort(words.begin(),words.end());
  unordered_map<string,int>m;
  for(auto i:words)m[i]++;
  string ans="";
  int size=INT_MIN;
 for(auto it:words){
    string temp="";
    int count=0;
    int n=it.size();
    for(int i=0;i<n;i++){
        temp+=it[i];
        if(m[temp]!=0)count++;
    }
    if(count==n &&n>size){
        size=n;
        ans=it;
    }
     }
     return ans;
 
  
           
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends