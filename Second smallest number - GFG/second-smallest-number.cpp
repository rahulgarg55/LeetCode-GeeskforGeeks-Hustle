//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int s, int d){
        // code here 
        if(s>=d*9 ||s==1 ||d==1)return "-1"; 
        int temp=d;
        s-=1;
        string ans="";
        for(int i=d-1;i>0;i--){
            if(s>9){
                ans+=9+'0';
                s-=9;
            }else{
                ans+=s+'0';
                s=0;
            }     
        }
        ans+='0'+(s+1);
        reverse(ans.begin(),ans.end()); //smallest number
        int ind=temp-1;
        for(int i=temp-1;i>=0;i--){
            if(ans[i]=='9')
            ind=i;
            else break;
        }
        ans[ind]-=1;
        ans[ind-1]+=1;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends