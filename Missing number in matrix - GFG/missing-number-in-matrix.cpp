//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        set<long long int>nonzero,zero;
        for(int i=0;i<matrix.size();i++){
            bool nozeropresent=true;
            long long int sum=0;
            for(int j=0;j<matrix[0].size();j++){
                sum+=matrix[i][j];
                if(matrix[i][j]==0)
                nozeropresent=false;
                
            }
            if(nozeropresent)nonzero.insert(sum);
            if(!nozeropresent)zero.insert(sum);
        }
            for(int j=0;j<matrix[0].size();j++){
                bool nozeropresent=true;
            long long int sum=0;
            for(int i=0;i<matrix.size();i++){
                sum+=matrix[i][j];
                if(matrix[i][j]==0)
                nozeropresent=false;
                
            }
            if(nozeropresent)nonzero.insert(sum);
            if(!nozeropresent)zero.insert(sum);
            }
            bool nozeropresent=true;
            long long int sum=0;
            for(int i=0;i<matrix.size();i++){
           
          sum+=matrix[i][i];
          if(matrix[i][i]==0)nozeropresent=false;
                
            }
            if(nozeropresent)nonzero.insert(sum);
            if(!nozeropresent)zero.insert(sum);
    
            nozeropresent=true;
            sum=0;
            for(int i=0,j=matrix.size()-1;j>=0;i++,j--){
                sum+=matrix[i][j];
                if(matrix[i][j]==0)nozeropresent=false;
                
            }
             if(nozeropresent)nonzero.insert(sum);
            if(!nozeropresent)zero.insert(sum);
            if(nonzero.size()==1 and zero.size()==1)
            {
                long long int x=*nonzero.begin();
                long long int y=*zero.begin();
                if(x<=y)return -1;
                return x-y;
                
            }
            return -1;
    }
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends