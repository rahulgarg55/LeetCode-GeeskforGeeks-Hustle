// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isSquare(string S);

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << isSquare(S) << endl;
    }
return 0;
}// } Driver Code Ends


int isSquare(string S){
    //complete the function here
   int sum=0;
   for(int i=0;i<S.size();i++){
       sum+=S[i];
   }
   return (ceil(sqrt(sum))==floor(sqrt(sum))); 
   //floor rounds down the number to the nearest integer.for eg. 2.5 to 2
   //ceil rounds up number to the nearest integer for eg. 2.5 to 3
    }