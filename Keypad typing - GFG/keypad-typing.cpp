// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    string value="";
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='b'||s[i]=='c'){
            value+='2';
        }
         else if(s[i]=='d' || s[i]=='e' || s[i]=='f')
       {
           value+='3';
       }
       else if(s[i]=='g' || s[i]=='h' || s[i]=='i')
       {
           value+='4';
       }
       else if(s[i]=='j' || s[i]=='k' || s[i]=='l')
       {
           value+='5';
       }
       else if(s[i]=='m' || s[i]=='n' || s[i]=='o')
       {
           value+='6';
       }
       else if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s')
       {
           value+='7';
       }
       else if(s[i]=='v' || s[i]=='t' || s[i]=='u')
       {
           value+='8';
       }
       else if(s[i]=='y' || s[i]=='w' || s[i]=='x' || s[i]=='z')
       {
           value+='9';
       }
   }
   return value;
    }

