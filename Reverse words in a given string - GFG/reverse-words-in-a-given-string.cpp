// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
      stack<string>st; ///will use stack to store every word when . found
      string res="";
      for(int i=0;i<S.size();i++){
      if(S[i]!='.'){ //if no dot found
          res+=S[i]; // will add in temp string to add each word in stack
      }
          if(S[i]=='.'){ // when dot found will push word in stack
          st.push(res);
          res=""; // will again empty the temp string for storing further words
      }
      }
      st.push(res);//will add last word also bcz at last we dont have dot so we will add manually
      string s=""; //another empty temporary string to get final ans
      while(!st.empty()){
          string str=st.top(); // will addd each word from top in any temp string by accessing by top() fun.
         st.pop(); // will take out each word one by one
          s+=str+".";
      }
      s.pop_back(); // will remove one extra dot added by us at the end of final res.
      return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends