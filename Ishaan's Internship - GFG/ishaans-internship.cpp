// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k);


int main() {

    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	cout << getCandidate(n, k) << endl;
    }
return 0;
}
// } Driver Code Ends


int getCandidate(int n, int k){
    //complte the function here
    int x=floor(log(n)/log(k));//where x is the maximum number which is less than or equal to N and also the power of K.
    return pow(k,x);

}