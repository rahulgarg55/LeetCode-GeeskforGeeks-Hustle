// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int swapNibbles(unsigned char x){
        // code here
        unsigned char ans=x<<4 | x>>4;
        //let shift will shift the last four bits to left, and right shift will shift
        //he digit to the right 4 times and make first four bits as 0,OR operator gives us the swapped nibbles.
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends