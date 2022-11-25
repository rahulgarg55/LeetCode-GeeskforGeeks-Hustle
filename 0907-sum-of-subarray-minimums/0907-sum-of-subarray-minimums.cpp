class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
          int n = arr.size(), mod = 1e9 + 7;
        vector<int> l2r(n), r2l(n);
        stack<pair<int, int>> s;

        for(int i=0; i<n; i++) {
            while(s.size() && s.top().first >= arr[i]) s.pop();
            l2r[i] = s.size() ? i - s.top().second : i + 1;
            s.push({arr[i], i});
        }
        while(s.size()) s.pop();

        for(int i=n-1; i>=0; i--) {
            while(s.size() && s.top().first > arr[i]) s.pop();
            r2l[i] = s.size() ? s.top().second - i : n - i;
            s.push({arr[i], i});
        }

        long ans = 0;
        for(int i=0; i<n; i++) {
            ans += (long)r2l[i] * l2r[i] * arr[i];
            ans %= mod;
        }

        return ans;
  
    }
};