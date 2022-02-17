// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s) {
        // code here
        if (s.size()==1 && !isdigit(s[0]))return sizeof(char);
        if(s.find('.')==string::npos)return sizeof(int);
        if(s.find('.')!=string::npos){
            int b=s.find('.');
            int n=s.size();
            if(n-b>=7)return sizeof(double);
            else return sizeof(float);
        }
        int a;
        cout<<sizeof(a)<<endl;
    float b;
    cout<<sizeof(b)<<endl;
    char c;
    cout<<sizeof(c)<<endl;
    bool d;
    cout<<sizeof(d)<<endl;
    long long int e;
    cout<<sizeof(e)<<endl;
    double f;
    cout<<sizeof(f)<<endl;
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}  // } Driver Code Ends