// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
void travel(vector<int>& nums, int l, int r, vector<int>& preorder)
{
	if (l > r)
		return ;

	int m = l + (r - l) / 2;
	
	preorder.push_back(nums[m]);
	
	travel(nums, l, m - 1, preorder);
	travel(nums, m + 1, r, preorder);
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>res;
        travel(nums,0,nums.size()-1,res);
        return res;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends