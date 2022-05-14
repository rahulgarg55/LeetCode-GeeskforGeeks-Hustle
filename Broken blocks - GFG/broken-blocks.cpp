// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
    // Code here
   
    int ans=0;
    for(int i=0;i<matrix.size();i++){
        bool flag=false;
        for(int j=0;j<matrix[0].size();j++){
            if(i==0){
                flag=true;
              ans=max(ans,matrix[i][j]);
            }else{
            if(matrix[i][j]==-1)continue;
            int a=i-1>=0? matrix[i-1][j]:-1; //qbove
            int b=i-1>=0 && j-1>=0?matrix[i-1][j-1]:-1; //diagnonal left
            int c=i-1>=0 && j+1<matrix[0].size()?matrix[i-1][j+1]:-1; //diagonal right
            if(a==-1 && b==-1 &&c==-1)continue;
           
            matrix[i][j]+=max(a,max(b,c));
            flag=true;
            ans=max(ans,matrix[i][j]);
            }
        }
        if(flag==false)return ans;
    }
    return ans;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends