class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        while(right<n){
            while(right<n && s[right]!=' ')right++;
            reverse(s.begin()+left,s.begin()+right);
            left=right+1;
            right++;
        }
        return s;
    }
};