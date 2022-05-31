// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
   	string add(string s1, string s2){
   	    // Code here
   	    int x1=s1.length()-1;
   	    int y1=s2.length()-1;
   	    string ans;
   	    int sum=0,carry=0;
   	    while(x1>=0 && y1>=0){
   	        sum=carry+(s1[x1]-48)+(s2[y1]-48);
   	        carry=sum/10;
   	        char ch=(sum%10)+48;
   	        ans.push_back(ch);
   	        
   	        x1--; y1--;
   	    }
   	    while(x1>=0){
   	        sum=carry+s1[x1]-48;
   	        carry=sum/10;
   	        char ch=(sum%10)+48;
   	        ans.push_back(ch);
   	        x1--;
   	    }
   	    	    while(y1>=0){
   	        sum=carry+s2[y1]-48;
   	        carry=sum/10;
   	        char ch=(sum%10)+48;
   	        ans.push_back(ch);
   	    y1--;
   	}  
   	if(carry){ //is still carry left
   	char ch=(carry)+48;
   	    ans.push_back(ch);
   	}
   	reverse(ans.begin(),ans.end());
   	int i=0;
   	while(ans[i]=='0'){
   	    i++;
   	}
   	//there are zeroes in the final ans
   	if(i==ans.size())
   	return "0";
   	string final;
   	for(; i<ans.size();i++)
   	final.push_back(ans[i]);
   	return final;
   	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends