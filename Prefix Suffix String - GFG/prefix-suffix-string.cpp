//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        unordered_set<string>s;
        for(auto i:s1){
            string temp=i;
            int n=temp.size();
            for(int j=0;j<n;j++){
                string temp1=temp.substr(0,j+1);
                string temp2=temp.substr(j+1,n-j);
                s.insert(temp1);
                s.insert(temp2);
            }
        }
        int ans=0;
        for(auto i:s2){
            if(s.find(i)!=s.end())
            ans++;
        }
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends