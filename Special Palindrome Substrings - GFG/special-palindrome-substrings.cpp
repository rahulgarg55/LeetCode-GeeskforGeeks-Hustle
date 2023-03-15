//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        int l1=s1.size();
        int l2=s2.size();
        int ans=INT_MAX;
        for(int i=0;i<l1-l2+1;i++){
            string temp=s1.substr(0,i)+s2+s1.substr(i+l2);
            int cost=0;
            for(int j=i;j<i+l2;j++){
                if(s1[j]!=temp[j])cost++;
            }  
            int x=0;
            for(int j=0;j<l1/2;j++){
                if((i>j||j>=i+l2) and temp[j]!=temp[l1-j-1])
                // if s2 is in the first half of the new string 
                cost++;
                else if(temp[j]!=temp[l1-j-1]&&(i>l1-j-1 ||l1-j-1>=i+l2))
                //second half s2
                cost++;
            
            else if(temp[j]!=temp[l1-j-1]){
            //is s2 is in both the halves
            x=1;break;
        }
        }
        if(x==0)ans=min(ans,cost); //1
        }
        if(ans==INT_MAX)return -1;
            return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends