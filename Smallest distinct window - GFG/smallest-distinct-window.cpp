// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        set<char>s; 
        unordered_map<char,int>m;
       for(char c:str)
       s.insert(c);
       
        int i =0, j = 0, ans = str.size(), n = s.size(); 
        
        while(i<str.size())
        {    m[str[i]]++; 
            if(m.size()==n)
            {
                while(m[str[j]]>1) m[str[j++]]--;
                ans = min(ans, i-j+1); 
            }
            i++;  
        }
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends