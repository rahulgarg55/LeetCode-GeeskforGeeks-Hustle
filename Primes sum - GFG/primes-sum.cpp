//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
bool isprime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
bool ispossible(int N){
        if(N<4)return false;
        if(N%2==0)return true; //54=3+51 44=3+41
        return isprime(N-2);
}
    string isSumOfTwo(int N){
        // code here
        if(ispossible(N))return "Yes";
        else return "No";
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends