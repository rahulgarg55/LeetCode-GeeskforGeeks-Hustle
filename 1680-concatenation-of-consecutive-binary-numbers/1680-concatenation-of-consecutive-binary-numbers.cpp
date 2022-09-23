class Solution {
public:
    int concatenatedBinary(int n) {
        long res = 0,s=0;
for(int i = 1; i <= n; i++) {
if((i & (i - 1)) == 0) s++;
res = ((res << s)+i) % 1000000007;
}
return (int) res;
    }
};