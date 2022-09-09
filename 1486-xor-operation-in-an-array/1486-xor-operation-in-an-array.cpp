class Solution {
public:
    int xorOperation(int n, int start) {
      int xorr=0;
        for(int i=0;i<n;i++)
            xorr^=start+i*2;
    return xorr;
    }
};