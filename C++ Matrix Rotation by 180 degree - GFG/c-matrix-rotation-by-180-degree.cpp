// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
void rotate90(vector<vector<int> >& matrix){
      int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]); //fist will find transpose of matrix
            }
        }
        for(int i=0;i<n;i++){
            int k=n-1; //then will reverse each row of matrix and we will rotate it by 90 degree.
            for(int j=0;j<n/2;j++) //will keep reversing row until we reach to middle element of row.
{
    swap(matrix[i][j],matrix[i][k]);
    k--;
}
}
}

    void rotate(vector<vector<int> >& matrix) {
     rotate90(matrix);
     rotate90(matrix); //will call function two times to rotate it by 180 degree
    }
};

// { Driver Code Starts.
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
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends