// { Driver Code Starts
#include <iostream>
using namespace std;
int calcDiff(string str);
 
int main()
{
    int t;
    cin>>t;
    string x;
    getline(cin,x);
    while(t--)
    {
        string str;
        getline(cin,str);
         cout << calcDiff(str) << "\n";
    }
  
    return 0;
}// } Driver Code Ends

bool isvowel(char ch){
    return( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int calcDiff(string str)
{
    //code here
    int count_vow=0,count_cons=0;
    int hard_words=0,easy_words=0;
    int consec_conso=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ' &&isvowel(tolower(str[i]))){
    count_vow++;
  consec_conso=0;
    }
    else if(str[i]!=' '){
        count_cons++;
        consec_conso++;
    }
    if(consec_conso==4){
        hard_words++;
        while(str[i]!=' ' &&i<str.length())
        i++;
        count_vow=0;
        count_cons=0;
        consec_conso=0;
    }

    else if(i<str.length() &&(str[i]==' '||i==str.length()-1)){
        count_cons>count_vow?hard_words++:easy_words++;
        count_vow=0;
        count_cons=0;
        consec_conso=0;
    }
    }
    return 5*(hard_words)+3*(easy_words);
}