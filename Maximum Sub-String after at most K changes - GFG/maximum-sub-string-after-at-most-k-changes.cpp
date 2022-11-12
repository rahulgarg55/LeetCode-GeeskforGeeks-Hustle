//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		     int l=0,r=0;
		     int freq[26]={0},n=s.length(),maxfreq=0,ans=0;
        for(int r=0;r<n;r++){
            maxfreq=max(maxfreq,++freq[s[r]-'A']); //calculating max freq of a char in our current window.
         
            while(r-l+1 - maxfreq > k){ 
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        
        }
        return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends