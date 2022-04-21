// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<double> FindRoots(int A, int B, int C) {
               vector<double> v;
        double rot=((B*B)-(4*A*C));
        double sqr=sqrt(rot);
        double de=2*A;
        if(rot<0.0){
          v.push_back(-1);
            return v;
        }
        double first=(-B+sqr)/de;
        double second=(-B-sqr)/de;
  
        v.push_back(first);
        v.push_back(second);
        sort(v.begin(),v.end());
        return v;
    }
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int A, B, C;
		cin >> A >> B >> C;
		Solution obj;
		vector<double>ans = obj.FindRoots(A, B, C);
		if(ans.size() == 1){
			cout << (int)ans[0] << "\n";
			continue;
		}
		for(auto i: ans)
			cout  << fixed << setprecision(6) << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends