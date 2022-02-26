class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if((n&(n-1))==0 &&(n%3==1))
            return true;
        else return false;
    }
};