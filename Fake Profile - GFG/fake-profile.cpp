// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}
// } Driver Code Ends


string solve(string a) {
    // code here
    unordered_map<char,int>mp;
    for(auto it:a){
        if(it!='a' &&it!='e' && it!='i' && it!='o' && it!='u')
        mp[it]++;
    }
    if(mp.size()%2)
    return "HE!";
    else 
    return "SHE!";
}