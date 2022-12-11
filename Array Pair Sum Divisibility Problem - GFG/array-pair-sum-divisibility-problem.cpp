//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        vector<int>v(k);
        for(int i=0;i<nums.size();i++){
            int rem=nums[i]%k;
            v[rem]++;
        }
        if(v[0]%2==1) //count is odd
        return false;
        for(int i=1;i<k;i++){
            if(v[i]!=v[k-i]) return false;
            //k=5
            //2elements with remainder 3
            //2 elements with remainder k-i=5-3=2
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends