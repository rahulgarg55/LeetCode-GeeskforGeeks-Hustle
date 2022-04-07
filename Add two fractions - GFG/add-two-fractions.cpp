// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}
// } Driver Code Ends


/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
   long long den=den1*den2/__gcd(den1,den2);
   long long n1=den/den1;
   long long  n2=den/den2;
   long long num=(n1*num1)+(n2*num2); 
   long long n=__gcd(num,den);
   num=num/n;
   den=den/n;
   cout<<num<<"/"<<den<<endl;
 }