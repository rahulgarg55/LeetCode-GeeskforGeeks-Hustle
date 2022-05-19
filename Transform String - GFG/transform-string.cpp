// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.length()!=B.length())return -1;
        int freq_A[256]={0}; //1

//There are 2^8 = 256 chars in an extended ASCII char set
        int freq_B[256]={0};
        for(int i=0;i<A.length();i++){
            freq_A[A[i]]++;
            freq_B[B[i]]++;
            }
            for(int i=0;i<256;i++){
                if(freq_A[i]!=freq_B[i]) //if frequency of all char in A not equal to all char in B
                return -1;
            }
            int count=0;
            int i=A.length()-1;
            int j=B.length()-1;
        while(i>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                i--;
                count++;
            }
        }
        return count;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends