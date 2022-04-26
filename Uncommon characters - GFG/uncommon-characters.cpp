// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code 
            vector<int>v1(26,0);
            vector<int>v2(26,0);
            string str;
            for(int i=0;i<A.size();i++){
                v1[A[i]-'a']=1;
            }
            for(int i=0;i<B.size();i++){
                v2[B[i]-'a']=1;
            }
            for(int i=0;i<26;i++){
       if((v1[i]==0 && v2[i]==1)||(v1[i]==1 &&v2[i]==0))
       str.push_back(i+'a');
            }
            if(str.size()==0)return "-1";
            return str;
            
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends