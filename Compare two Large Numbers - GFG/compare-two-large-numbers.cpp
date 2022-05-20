// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}
// } Driver Code Ends


int check(string a,string b){
    //code
  while(a.size()!=0){
      if(a[0]=='0'){
          a.erase(a.begin());
      }else break;
  }
  while(b.size()!=0){
      if(b[0]=='0'){
          b.erase(b.begin());
      }else break;
  }
  if(a.size()>b.size())return 2;
  if(a.size()<b.size())return 1;
  for(int i=0;i<a.size();i++){
      if(a[i]>b[i]){
          return 2;
          
      }else if(a[i]<b[i]){
          return 1;
      }else continue;
  }
    return 3;
}