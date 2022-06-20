// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
 long long fact(int n){ 
         long fact=1;
         for(int i=1;i<=n;i++){
             fact=fact*i;
         }
         return fact;
     }
    long posIntSol(string s)
    {
     int n=1;//no of variables
     int index=0;
     for(int j=0;j<s.length();j++){
         if(s[j]=='+')n++; //will keep increasing our number of variables
         if(s[j]=='=')index=j; //for eg here index is 3 in 1st test case at =
     }
     string num=s.substr(index+1); //value of k, qill give 5 in 1st test case but as string
     int k=stoi(num);
     n--; //bcz we need (k-1)C(n-1) will decrement it by 1
     k--; //same here
     //(n*n-1*n-2*n-3.........*n-r-1)/r! here n is k and r is n 
     long long numerator=1; //we need to calculate the above formula written
     for(int j=0;j<n;j++){
         numerator*=k;  //n*n-1*n-2.... bcz here n is k
         k--;
     }
     long long denominator=fact(n); //we did n-1 before already
     long ans=numerator/denominator; //kCn we expanded bcz we want to cut (n-r)! in formula.
     return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends