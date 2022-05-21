// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long performOperation(long long n);
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<performOperation(n)<<endl;
    }
}// } Driver Code Ends


long long performOperation(long long n)
{
    //code here.
    long long int num=0; //to store updated min and max number
    long long int temp=n;
    string str=to_string(n);
    for(long long i=0;i<str.length();i++){
if(str[i]=='5'){
str[i]='6';
num=num*10+(str[i]-'0'); //then after that we are storing our updated string in num variable
}
else if(str[i]=='6'){
str[i]='5';
num=num*10+(str[i]-'0');
}
        else {
        num=num*10+(str[i]-'0');
    }
}
return (temp+num); //num contains now 
}