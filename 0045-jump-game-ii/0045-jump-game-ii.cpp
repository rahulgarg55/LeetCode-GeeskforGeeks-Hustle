class Solution {
public:
    int jump(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0;
        int ans = 1;
        int mx = arr[0];
        
        for (int i = 0;i < n;){
            int temp = mx;
            while(i < n and i <= mx){
                temp = max(temp, i + arr[i]);
                i+= 1;
            }
            if (mx >= n-1)  return ans;
            if (temp >= n-1)   return ans+1;
            ans += 1;
            if (mx == temp) return -1;
            mx = temp;
            // cout << mx << " ";
        }
        return ans;
    }
};