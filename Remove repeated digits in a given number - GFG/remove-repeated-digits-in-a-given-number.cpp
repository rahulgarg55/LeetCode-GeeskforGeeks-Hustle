// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int modify (long long int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        cout << modify (n) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



long long int modify (long long int N)
{
    // your code here
    string str=to_string(N);
    long long int num=str[0]-'0';
    for(int i=1;i<str.length();i++){
 if(str[i]!=str[i-1])
 num=num*10+(str[i]-'0');
    }
    return num;
}