// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
string res;
for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u'||
   s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' ||s[i]=='U')
   res.push_back(s[i]);  
}
if(res.size()==0)return "No Vowel";
return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}  // } Driver Code Ends