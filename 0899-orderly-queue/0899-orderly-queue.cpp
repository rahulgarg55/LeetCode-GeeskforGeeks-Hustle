class Solution {
public:
    string orderlyQueue(string S, int k) {
         if (k > 1) {
      sort(S.begin(), S.end());
      return S;
    }

    string ans = S;

    for (int i = 1; i < S.length(); ++i)
      ans = min(ans, S.substr(i) + S.substr(0, i));

    return ans;
    }
};